#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a;
  cin >> t;

  while(t--) {
    cin >> n;
    vector<long long> v;

    for(long long i = 0; i < (n); i++) {
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<long long>());
    long long r = (n + 1) / 2, p = v[r - 1];

    for(auto i = v.begin() + r; i != v.end(); i++) {
      if(*i < p)
        break;
      r++;
    }

    cout << r << endl;
  }

  return 0;
}
