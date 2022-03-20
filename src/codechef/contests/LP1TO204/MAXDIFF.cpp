#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, k, w;
  cin >> t;

  while(t--) {
    cin >> n >> k;
    k = k < n - k ? k : n - k;
    vector<long long> v;
    long long r = 0;

    while(n--) {
      cin >> w;
      v.push_back(w);
      r += w;
    }

    sort(v.begin(), v.end());

    while(--k > -1)
      r -= v[k] * 2;

    cout << r << endl;
  }

  return 0;
}
