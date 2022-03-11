#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while(t--) {
    string p, q, r = "Yes";
    cin >> p >> q;

    for(long long i = 0; i < p.length(); i++) {
      if(p[i] != q[i] && p[i] != '?' && q[i] != '?') {
        r = "No";
        break;
      }
    }

    cout << r << endl;
  }

  return 0;
}
