#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, s;
  cin >> t;

  while(t--) {
    long long r = 0, m = INT_MAX;
    cin >> n;

    while(n--) {
      cin >> s;
      
      if(s <= m) {
        r++;
        m = s;
      }
    }

    cout << r << endl;
  }
  return 0;
}
