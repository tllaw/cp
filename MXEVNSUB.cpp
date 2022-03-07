#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, r;
  cin >> t;

  while(t--) {
    cin >> n;
    r = (n + 1) / 2;
    cout << ((r - r % 2) * 2 - (n % 2 - r % 2)) << endl;
  }

  return 0;
}
