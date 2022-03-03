#include <bits/stdc++.h>
using namespace std;

int main() {
  long long r = 0, n, b[5] = {100, 20, 10, 5, 1};
  cin >> n;

  for(long long i = 0; i < 5; i++) {
    r += n / b[i];
    n %= b[i];
  }

  cout << r << endl;
  return 0;
}
