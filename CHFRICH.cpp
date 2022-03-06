#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a, b, x;
  cin >> t;

  while(t--) {
    cin >> a >> b >> x;
    cout << ((b - a) / x) << endl;
  }

  return 0;
}
