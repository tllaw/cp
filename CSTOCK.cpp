#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, s, a, b, c;
  long double z;
  cin >> t;

  while(t--) {
    cin >> s >> a >> b >> c;
    z = s * (1 + c / 100.0);
    cout << (a <= z && z <= b ? "YES" : "NO") << endl;
  }

  return 0;
}
