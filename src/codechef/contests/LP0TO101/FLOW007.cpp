#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    long long r = 0;
    cin >> n;

    while(n) {
      r = r * 10 + n % 10;
      n /= 10;
    }

    cout << r << endl;
  }

  return 0;
}
