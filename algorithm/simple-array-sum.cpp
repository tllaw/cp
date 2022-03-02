#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, r = 0;
  cin >> n;

  while(n--) {
    cin >> a;
    r += a;
  }
  
  cout << r << endl;
  return 0;
}
