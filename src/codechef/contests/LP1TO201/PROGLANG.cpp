#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, r, a[6];
  cin >> t;

  while(t--) {
    for(long long i = 0; i < 6; i++)
      cin >> a[i];

    for(long long i = 0; i < 6; i += 2) {
      if(a[i] == a[0] && a[i + 1] == a[1] || a[i] == a[1] && a[i + 1] == a[0])
        r = i / 2;
    }

    cout << r << endl;
  }

  return 0;
}
