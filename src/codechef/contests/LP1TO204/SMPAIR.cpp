#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a;
  cin >> t;

  while(t--) {
    long long p = INT_MAX, q = INT_MAX;
    cin >> n;

    while(n--) {
      cin >> a;

      if(a <= p) {
        q = p;
        p = a;
      } else if (a <= q)
        q = a;
    }

    cout << (p + q) << endl;
  }

  return 0;
}
