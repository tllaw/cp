#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, p = 2, q = 1;
  for(long long i = 0; i < 3; i++) {
    cin >> a;
    a == 5 ? p-- : (a == 7 ? q-- : 0);
  }
  cout << (!p && !q ? "YES" : "NO") << endl;
  return 0;
}
