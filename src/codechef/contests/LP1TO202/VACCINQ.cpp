#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, p, x, y, a, r;
  cin >> t;

  while(t--) {
    r = 0;
    cin >> n >> p >> x >> y;
    
    for(long long i = 0; i < n; i++) {
      cin >> a;

      if(i < p)
        r += a ? y : x;
    }

    cout << r << endl;
  }

  return 0;
}
