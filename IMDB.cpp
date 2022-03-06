#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, x, s, r, m;
  cin >> t;

  while(t--) {
    m = 0;
    cin >> n >> x;

    while(n--) {
      cin >> s >> r;

      if(x >= s && r > m)
        m = r;
    }

    cout << m << endl;
  }

  return 0;
}
