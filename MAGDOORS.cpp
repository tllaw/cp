#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t;
  string s;
  cin >> t;

  while(t--) {
    long long p = '1', r = 0;
    cin >> s;

    for(long long i = 0; i < s.length(); i++) {
      r += p != s[i];
      p = s[i];
    }

    cout << r << endl;
  }

  return 0;
}
