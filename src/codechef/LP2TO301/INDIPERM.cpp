#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    cin >> n;

    for(long long i = 2; i <= n; i++)
      cout << i << " ";
    cout << 1 << endl;
  }

  return 0;
}
