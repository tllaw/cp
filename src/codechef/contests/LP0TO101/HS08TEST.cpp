#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x;
  long double y, z;
  cin >> x >> y;

  z = x % 5 == 0 && y - x - 0.5 >= 0 ? y - x - 0.5 : y;
  printf("%.2Lf\n", z);
  return 0;
}
