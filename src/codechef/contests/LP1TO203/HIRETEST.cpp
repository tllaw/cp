#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, m, x, y;
  cin >> t;

  while(t--) {
    cin >> n >> m >> x >> y;
    string s;

    while(n--) {
      long long f = 0, p = 0, u = 0;
      cin >> s;
      
      for(long long i = 0; i < m; i++)
        s[i] == 'F' ? f++ : (s[i] == 'P' ? p++ : u++);

      cout << (f >= x || (f >= x - 1 && p >= y));
    }

    cout << endl;
  }

  return 0;
}
