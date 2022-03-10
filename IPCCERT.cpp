#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, m, k, t, q, r = 0;
  cin >> n >> m >> k;

  while(n--) {
    long long s = 0;

    for(long long i = 0; i < k; i++) {
      cin >> t;
      s += t;
    }

    cin >> q;
    r += s >= m && q <= 10;
  }

  cout << r << endl;
  return 0;
}
