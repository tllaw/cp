#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  string s;
  cin >> t;

  while(t--) {
    cin >> s;

    for(long long i = 0; i < s.length() - 4; i++) {
      if(s.substr(i, 5) == "party") {
        s.replace(i, 5, "pawri");
        i += 4;
      }
    }

    cout << s << endl;
  }

  return 0;
}
