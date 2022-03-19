#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, a, b, c, d, k, s;
  cin >> t;

  while(t--) {
    cin >> a >> b >> c >> d >> k;
    s = abs(c - a) + abs(d - b);
    cout << (k < s || (k - s) % 2 ? "NO" : "YES") << endl;
  }

  return 0;
}
