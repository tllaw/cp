#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, s;
  cin >> t;

  while(t--) {
    cin >> n >> s;
    cout << (n < s ? n - (s - n) : s) << endl;
  }

  return 0;
}
