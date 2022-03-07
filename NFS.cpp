#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, u, v, a, s;
  cin >> t;

  while(t--) {
    cin >> u >> v >> a >> s;
    cout << (u * u - 2 * a * s <= v * v ? "YES" : "NO") << endl;
  }

  return 0;
}
