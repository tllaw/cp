#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, m, x, y, h;
  cin >> t;

  while(t--) {
    cin >> m >> x >> y;
    set<long long> s;
    long long p = 0, r = 0, z = x * y;

    while(m--) {
      cin >> h;
      s.insert(h);
    }

    for(auto i = s.begin(); i != s.end(); i++) {
      if(*i - z - 1 > p)
        r += *i - z - 1 - p;
      p = *i + z;
    }

    cout << (r + 100 - (p > 100 ? 100 : p)) << endl;
  }

  return 0;
}
