#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a;
  cin >> t;

  while(t--) {
    cin >> n;
    vector<long long> v(1001, 0);
    long long p = -1, q = -1;

    while(n--) {
      cin >> a;
      v[a]++;
    }

    for(long long i = 1000; i > 0; i--) {
      if(v[i] > 1)
        (p < 0 ? p : q) = i;

      if(v[i] > 3 && q < 0)
        q = i;

      if(q > 0)
        break;
    }

    cout << (q < 0 ? -1 : p * q) << endl;
  }

  return 0;
}
