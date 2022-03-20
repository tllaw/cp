#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, x;
  cin >> t;

  while(t--) {
    cin >> n >> x;
    cout << (n / 3 * 2 * x + n % 3 * x) << endl;
  }

  return 0;
}
