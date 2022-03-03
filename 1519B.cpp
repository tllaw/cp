#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, m, k;
  cin >> t;

  while(t--) {
    cin >> n >> m >> k;
    cout << (n * m - 1 == k ? "YES" : "NO") << endl;
  }

  return 0;
}
