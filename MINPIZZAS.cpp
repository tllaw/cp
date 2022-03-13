#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, k;
  cin >> t;

  while(t--) {
    cin >> n >> k;
    cout << (n * k / __gcd(n, k) / k) << endl;
  }

  return 0;
}
