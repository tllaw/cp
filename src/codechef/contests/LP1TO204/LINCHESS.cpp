#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, k, p;
  cin >> t;

  while(t--) {
    long long m = -1;
    cin >> n >> k;
    
    while(n--) {
      cin >> p;

      if(k % p == 0 && p > m)
        m = p;
    }

    cout << m << endl;
  }

  return 0;
}
