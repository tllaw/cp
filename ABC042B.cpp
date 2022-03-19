#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, l;
  string s;
  vector<string> v;
  cin >> n >> l;

  while(n--) {
    cin >> s;
    v.push_back(s);
  }

  sort(v.begin(), v.end());

  for(auto i = (v).begin(); i != (v).end(); i++)
    cout << *i;

  cout << endl;
  return 0;
}
