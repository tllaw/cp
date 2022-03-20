#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a;
  cin >> t;

  while(t--) {
    vector<long long> p, q;
    cin >> n;

    for(long long i = 0; i < n; i++) {
      cin >> a;
      p.push_back(a);
    }

    for(long long i = 0; i < n; i++) {
      cin >> a;
      q.push_back(a);
    }

    sort(p.begin(), p.end());
    cout << (p == q ? "yes" : "no") << endl;
  }

  return 0;
}
