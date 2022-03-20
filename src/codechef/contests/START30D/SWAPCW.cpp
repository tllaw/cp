#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  string p, q;
  cin >> t;

  while(t--) {
    cin >> n >> p;
    q = p;
    sort(p.begin(), p.end());

    for(long long i = 0; i < n / 2; i++) {
      if(q[i] > q[n - i - 1]) {
        char c = q[i];
        q[i] = q[n - i - 1];
        q[n - i - 1] = c;
      }
    }

    cout << (p == q ? "YES" : "NO") << endl;
  }

  return 0;
}
