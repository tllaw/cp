#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, a, m, r;
  cin >> t;

  while(t--) {
    m = INT_MAX;
    r = 0;

    for(long long i = 0; i < 3; i++) {
      cin >> a;
      r += a;
      m = m > a ? a : m;
    }

    cout << (r - m) << endl;
  }

  return 0;
}
