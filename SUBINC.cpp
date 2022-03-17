#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while(t--) {
    long long n, a, p = 0, c = 0, r = 0;
    cin >> n;

    while(n--) {
      cin >> a;

      if(p > a) {
        r += c * (c + 1) / 2;
        c = 1;
      } else
        c++;

      p = a;
    }

    r += c * (c + 1) / 2;
    cout << r << endl;
  }

  return 0;
}
