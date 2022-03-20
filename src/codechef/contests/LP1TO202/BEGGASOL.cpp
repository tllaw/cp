#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, f;
  cin >> t;

  while(t--) {
    long long p = 1, q, r = 0;
    cin >> n >> q;

    while(--n) {
      cin >> f;

      if(p && --q >= 0) {
        q += f;
        r++;
      } else
        p = 0;
    }

    cout << (q > 0 ? q + r : r) << endl;
  }

  return 0;
}
