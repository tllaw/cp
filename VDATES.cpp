#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, d, l, r;
  cin >> t;

  while(t--) {
    cin >> d >> l >> r;
    cout << (d < l ? "Too Early" : (r < d ? "Too Late" : "Take second dose now")) << endl;
  }

  return 0;
}
