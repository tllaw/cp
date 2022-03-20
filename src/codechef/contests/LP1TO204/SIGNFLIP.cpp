#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, k, a;
  cin >> t;

  while(t--) {
    long long r = 0;
    vector<long long> v;
    cin >> n >> k;

    while(n--) {
      cin >> a;

      if(a < 0)
        v.push_back(a);
      else
        r += a;
    }

    sort(v.begin(), v.end(), greater<long long>());

    while(k-- && v.size()) {
      r += v.back() * -1;
      v.pop_back();
    }

    cout << r << endl;
  }

  return 0;
}
