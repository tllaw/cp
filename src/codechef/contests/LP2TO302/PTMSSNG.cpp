#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, x, y;
  cin >> t;

  while(t--) {
    cin >> n;
    n = 4 * n - 1;
    long long a = 0, b = 0;

    while(n--) {
      cin >> x >> y;
      a ^= x;
      b ^= y;
    }

    cout << a << " " << b << endl;
  }

  return 0;
}
