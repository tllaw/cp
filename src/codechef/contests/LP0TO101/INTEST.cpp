#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, k, t, r = 0;
  cin >> n >> k;

  while(n--) {
    cin >> t;
    t % k == 0 ? r++ : r;
  }

  cout << r << endl;
  return 0;
}
