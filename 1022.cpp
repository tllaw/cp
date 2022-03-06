#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, b, c, d, p, q, r, s;
  char e, x, y;
  cin >> n;

  while(n--) {
    cin >> a >> x >> b >> e >> c >> y >> d;

    if(e == '/') {
      p = a * d;
      q = b * c;
    } else {
      q = b * d;

      if(e == '+')
        p = a * d + b * c;
      else if(e == '-')
        p = a * d - b * c;
      else
        p = a * c;
    }

    r = __gcd(p, q);
    s = q / r < 0 ? -1 : 1;
    cout << p << "/" << q << " = " << (s * p / r) << "/" << (s * q / r) << endl;
  }


  return 0;
}
