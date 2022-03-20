#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, l;
  cin >> t;

  while(t--) {
    string r = "NO";
    cin >> n;
    l = (n % 10) % 2;

    while(n /= 10) {
      if((n % 10) % 2 == l) {
        r = "YES";
        break;
      }
    }

    cout << r << endl;
  }

  return 0;
}
