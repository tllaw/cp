#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  string s;
  cin >> t;

  while(t--) {
    long long r = -1, m = -1;
    cin >> s;

    for(long long i = 0; i < s.length(); i++) {
      if(s[i] != s[0] && s[i] != s.back()) {
        r = r < 0 ? 1 : r + 1;
        m = r > m ? r : m;
      } else
        r = -1;
    }

    cout << m << endl;
  }

  return 0;
}
