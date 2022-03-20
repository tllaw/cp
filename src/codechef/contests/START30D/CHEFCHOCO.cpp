#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, c, x, y;
  cin >> t;

  while(t--) {
    cin >> c >> x >> y;
    cout << ((c - x) * y) << endl;
  }

  return 0;
}
