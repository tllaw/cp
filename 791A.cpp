#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, i = 0;
  cin >> a >> b;
  for(; a <= b; a *= 3, b *= 2, i++);

  cout << i << endl;
  return 0;
}
