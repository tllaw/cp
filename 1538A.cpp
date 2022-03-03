#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, x, a, b;
  cin >> t;

  while(t--) {
    cin >> n;

    for(long long i = 0; i < (n); i++) {
      cin >> x;
      
      if(x == 1)
        a = i;

      if(x == n)
        b = i;
    }

    if(a > b) {
      long long c = a;
      a = b;
      b = c;
    }

    long long m = (b + 1 < n - a ? b + 1 : n - a);
    m = m < a + 1 + (n - b) ? m : a + 1 + (n - b);

    cout << m << endl;
  }

  return 0;
}
