#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  string s;
  cin >> t;

  while(t--) {
    long long r = 0;
    cin >> n >> s;

    for(long long i = 0; i < n; i++)
      r += s[i] == '1';

    cout << ((r + 1) * r / 2) << endl;
  }

  return 0;
}
