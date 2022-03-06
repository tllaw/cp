#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  while(cin >> s) {
    long long n = 0;

    for(long long i = 0; i < s.length(); i++) {
      if(s[i] == ')') {
        if(--n < 0)
          break;
      } else if(s[i] == '(')
        ++n;
    }

    cout << (n == 0 ? "correct" : "incorrect") << endl;
  }

  return 0;
}
