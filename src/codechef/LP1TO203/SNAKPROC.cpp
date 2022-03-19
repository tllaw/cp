#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, l;
  string s;
  cin >> t;

  while(t--) {
    long long r = 0;
    cin >> l >> s;

    for(long long i = 0; i < l; i++) {
      if((s[i] == 'H' && r++) || (s[i] == 'T' && --r))
        break;
    }

    cout << (r ? "Invalid" : "Valid") << endl;
  }

  return 0;
}
