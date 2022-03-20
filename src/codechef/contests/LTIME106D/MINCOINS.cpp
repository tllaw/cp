#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, x;
  cin >> t;

  while(t--) {
    cin >> x;
    cout << (x % 5 ? -1 : x / 10 + (x % 10 != 0)) << endl;
  }

  return 0;
}
