#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    cin >> n;

    if(n > 1) {
      cout << 1;
      for(long long i = 0; i < n - 2; i++)
        cout << 0;
      cout << 5 << endl;
    } else
      cout << 3 << endl;
  }

  return 0;
}
