#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, s, e, l;
  cin >> t;

  while(t--) {
    cin >> s;
    long long q[s] = {0}, r = 0;

    for(long long i = 0; i < s; i++) {
      cin >> q[i];
      r += q[i];
    }

    for(long long i = 0; i < s; i++) {
      cin >> e;

      while(e--) {
        cin >> l;
        r += l - q[i];
      }
    }

    cout << r << endl;
  }

  return 0;
}
