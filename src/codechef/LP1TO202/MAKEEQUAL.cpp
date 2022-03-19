#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, a;
  cin >> t;

  while(t--) {
    long long p = -1, q = -1;
    cin >> n;

    while(n--) {
      cin >> a;
      p = p != -1 && p < a ? p : a;
      q = q > a ? q : a;
    }

    cout << q - p << endl;
  }

  return 0;
}
