#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, c;
  cin >> t;

  while(t--) {
    long long a = 0, b = 0;
    cin >> n;

    while(n--) {
      cin >> c;
      c == 1 ? a++ : b++;
    }

    cout << (a % 2 || (b % 2 && a == 0) ? "NO" : "YES") << endl;
  }

  return 0;
}
