#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a, b, c, d, m;
  cin >> t;

  while(t--) {
    cin >> a >> b >> c >> d >> m;
    cout << (a + c * m <= b && b <= a + d * m) << endl;
  }

  return 0;
}
