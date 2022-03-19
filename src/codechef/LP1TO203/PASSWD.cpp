#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  string s, c = "@#%&?";
  cin >> t;

  while(t--) {
    long long a[4] = {0};
    cin >> s;

    for(long long i = 0; i < s.length(); i++) {
      if('a' <= s[i] && s[i] <= 'z')
        a[0] = 1;

      if(i == 0 || i == s.length() - 1)
        continue;

      if('A' <= s[i] && s[i] <= 'Z')
        a[1] = 1;

      if('0' <= s[i] && s[i] <= '9')
        a[2] = 1;

      if(c.find(s[i]) != string::npos)
        a[3] = 1;
    }

    cout << (a[0] * a[1] * a[2] * a[3] * (s.length() >= 10) ? "YES" : "NO") << endl;
  }

  return 0;
}
