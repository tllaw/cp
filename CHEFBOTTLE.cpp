#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, x, k;
  cin >> t;

  while(t--) {
    cin >> n >> x >> k;
    cout << (k / x <= n ? k / x : n) << endl;
  }

  return 0;
}
