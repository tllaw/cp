#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, m, x1, y1, x2, y2, d;
  cin >> t;

  while(t--) {
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    vector<long long> v = { x1 % 2 ^ y1 % 2 ? 2 : 1, x1 % 2 ^ y1 % 2 ? 1 : 2 };
    set<vector<long long>> s;

    if((x1 % 2 == x2 % 2) ^ (y1 % 2 == y2 % 2) == 0) {
      s = {
        {x1 - 1, y1},
        {x1 + 1, y1},
        {x2 - 1, y2},
        {x2 + 1, y2},
        {x1, y1 - 1},
        {x1, y1 + 1},
        {x2, y2 - 1},
        {x2, y2 + 1}
      };
    }

    for(long long i = 1; i <= n; i++) {
      for(long long j = 1; j <= m; j++) {
        if(s.count({i, j}))
          d = 3;
        else if(i == x1 && j == y1)
          d = 1;
        else if(i == x2 && j == y2)
          d = 2;
        else
          d = v[i % 2 ^ j % 2];

        cout << d << " ";
      }

      cout << endl;
    }
  }

  return 0;
}
