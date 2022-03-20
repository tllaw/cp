#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, x, a, b;
  cin >> t;

  while(t--) {
    cin >> n >> x;
    a = x / 3 + (x % 3 > 0);
    b = (3 - x % 3) % 3;
    cout << (n >= a + b ? "YES" : "NO") << endl;

    if(n >= a + b)
      cout << a << " " << b << " " << n - a - b << endl;
  }

  return 0;
}
