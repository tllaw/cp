#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, l, r;
  cin >> t;

  while(t--){
    cin >> l >> r;
    cout << (2 * (r - l) + 1) << endl;
  }

  return 0;
}
