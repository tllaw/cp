#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a;
  cin >> t;

  while(t--) {
    long long r = 7;
    cin >> n;

    for(long long i = 0; i < n; i++) {
      cin >> a;
      
      if(i < 7)
        continue;

      if(a < 8)
        r = i + 1;
    }

    cout << r << endl;
  }
  return 0;
}
