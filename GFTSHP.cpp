#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, k, a;
  cin >> t;

  while(t--) {
    cin >> n >> k;
    long long r = 0, c = 0;
    vector<long long> v;

    for(long long i = 0; i < n; i++) {
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(long long i = 0; i < n; i++) {
      if(c + (v[i] + 1) / 2 > k)
        break;

      r++;
      c += v[i];
    }

    cout << r << endl;
  }

  return 0;
}
