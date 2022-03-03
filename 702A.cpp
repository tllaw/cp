#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, m = 0, r = 0, p = 0, c;
  cin >> n;

  while(n--) {
    cin >> c;
    r = c > p ? r + 1 : 1;
    m = m > r ? m : r;
    p = c;
  }

  cout << m << endl;
  return 0;
}
