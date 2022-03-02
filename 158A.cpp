#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, a, s, r = 0;
  cin >> n >> t;

  while(n--) {
    cin >> a;

    if(!--t)
      s = a;

    if(!a || (t < 0 && a != s))
      break;

    r++;
  }

  cout << r << endl;
  return 0;
}
