#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  string s;
  cin >> t;

  while(t--) {
    long long c = 0;
    cin >> n >> s;

    for(long long i = 0; i < n; i++) {
      c += s[i] - '0';
      if(s[i] == '0')
        cout << 0;
    }

    for(long long i = 0; i < c; i++)
      cout << 1;

    cout << endl;
  }

  return 0;
}
