#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, m, a;
  cin >> t;

  while(t--) {
    cin >> n >> m;
    set<long long> s;

    while(n--) {
      cin >> a;
      s.insert(a);
    }

    cout << (s.size() < m ? "YES" : "NO") << endl;
  }

  return 0;
}
