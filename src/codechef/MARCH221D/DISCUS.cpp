#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, a;
  cin >> t;

  while(t--) {
    long long m = -1;
    for(long long i = 0; i < 3; i++) {
      cin >> a;
      m = a > m ? a : m;
    }
    cout << m << endl;
  }

  return 0;
}
