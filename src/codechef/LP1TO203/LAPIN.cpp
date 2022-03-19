#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while(t--) {
    string s, p, q;
    long long a[26] = {0}, r = 1;
    cin >> s;

    p = s.substr(0, s.length() / 2);
    q = s.substr((s.length() + 1) / 2);

    for(long long i = 0; i < p.length(); i++)
      a[p[i] - 'a']++;

    for(long long i = 0; i < q.length(); i++)
      a[q[i] - 'a']--;

    for(long long i = 0; i < 26; i++) {
      if(a[i]) {
        r = 0;
        break;
      }
    }

    cout << (r ? "YES" : "NO") << endl;
  }

  return 0;
}
