#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a, b, c;
  cin >> t;

  while(t--) {
    cin >> a >> b >> c;
    cout << (a + b + c == 180 ? "YES" : "NO") << endl;
  }

  return 0;
}
