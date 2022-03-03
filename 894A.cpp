#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  vector<long long> v;
  long long q = 0, r = 0;
  cin >> s;

  for(long long i = 0; i < s.length(); i++) {
    if(s[i] == 'Q')
      q++;

    if(s[i] == 'A')
      v.push_back(q);
  }

  for(auto i = (v).begin(); i != (v).end(); i++) {
    r += *i * (q - *i);
  }

  cout << r << endl;
  return 0;
}
