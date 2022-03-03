#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n;
  string s;
  cin >> t;

  while(t--) {
    bool b = false;
    cin >> n >> s;

    for(long long i = 0; i < 5; i++) {
      if(s.substr(0, i) + s.substr(n - (4 - i)) == "2020") {
        b = true;
        break;
      }
    }

    cout << (b ? "YES" : "NO") << endl;
  }

  return 0;
}
