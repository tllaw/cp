#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    long long c = 0, r = 0;
    string s;
    cin >> n >> s;

    for(long long i = 0; i < n; i++) {
      if(i % 2 == 0)
        c ^= s[i] - '0';
      r = (r * 2 + c) % 998244353;
    }

    cout << r << endl;
  }

  return 0;
}
