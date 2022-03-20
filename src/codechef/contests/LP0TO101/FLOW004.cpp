#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n;
  cin >> t;

  while(t--) {
    cin >> n;
    cout << (n % 10 + floor(n / pow(10, floor(log10(n))))) << endl;
  }

  return 0;
}
