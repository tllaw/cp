#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, r = 0;
  string s;
  cin >> n >> s;

  for(long long i = 1; i < (n); i++) {
    if(s[i] == s[i - 1])
      r++;
  }

  cout << r << endl;
  return 0;
}
