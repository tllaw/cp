#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, x, n, a;
  cin >> t;

  while(t--) {
    set<long long> s;
    cin >> n >> x;

    for(long long i = 0; i < n; i++) {
      cin >> a;
      s.insert(a);
    }

    cout << (n - x < s.size() ? n - x : s.size()) << endl;
  }

  return 0;
}
