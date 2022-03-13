#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a, b, p, q;
  cin >> t;

  while(t--) {
    cin >> a >> b >> p >> q;
    cout << (p % a == 0 && q % b == 0 && abs(p / a - q / b) < 2 ? "YES" : "NO") << endl;
  }

  return 0;
}
