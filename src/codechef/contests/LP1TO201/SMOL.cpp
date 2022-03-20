#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, k;
  cin >> t;

  while(t--) {
    cin >> n >> k;
    cout << (k == 0 ? n : n % k) << endl;
  }

  return 0;
}
