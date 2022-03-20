#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, m, k, a;
  cin >> t;

  while(t--) {
    cin >> n >> m >> k;
    long long p = 1, r = 0;

    for(long long i = 0; i < n; i++) {
      cin >> a;

      if(!p)
        continue;

      a == 1 ? r++ : p = 0;
    }

    cout << (r == n ? 100 : (r >= m ? k : 0)) << endl;
  }

  return 0;
}
