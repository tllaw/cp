#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a[10], k, m, r;
  cin >> t;

  while(t--) {
    for(long long i = 0; i < 10; i++)
      cin >> a[i];

    cin >> k;
    for(long long i = 9; i > -1; i--) {
      m = a[i] < k ? a[i] : k;
      a[i] -= m;
      k -= m;

      if(!k && a[i]) {
        cout << i + 1 << endl;
        break;
      }
    }
  }

  return 0;
}
