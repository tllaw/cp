#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, a, b, c;
  cin >> t;

  while(t--) {
    cin >> n >> a >> b >> c;
    cout << ((b > a + c ? a + c : b) >= n ? "YES" : "NO") << endl;
  }

  return 0;
}
