#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, k, s;
  cin >> t;

  while(t--) {
    vector<long long> v(200010, 0);
    long long r = 0;
    cin >> n >> k;

    while(n--) {
      cin >> s;
      v[s] = 1;
    }

    for(long long i = 0; i < 200010 && k > -1; i++) {
      if(v[i] == 0) {
        r = i;
        k--;
      }
    }

    cout << r << endl;
  }

  return 0;
}
