#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, c, r = 0;
  cin >> n;

  while(n--) {
    cin >> a >> b >> c;
    r += (a + b + c > 1);
  }

  cout << r << endl;
  return 0;
}
