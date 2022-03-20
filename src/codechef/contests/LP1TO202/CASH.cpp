#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, k, a;
  cin >> t;

  while(t--) {
    long long s = 0;
    cin >> n >> k;

    while(n--) {
      cin >> a;
      s += a;
    }

    cout << (s % k) << endl;
  }

  return 0;
}
