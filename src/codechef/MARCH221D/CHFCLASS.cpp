#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    cin >> n;
    cout << (n / 7 + (n % 7 > 5)) << endl;
  }

  return 0;
}
