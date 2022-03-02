#include <bits/stdc++.h>
using namespace std;

int main() {
  int r = -1;

  for(int n = 0; !n; r++)
    cin >> n;
  
  cout << (abs(r / 5 - 2) + abs(r % 5 - 2)) << endl;
  return 0;
}
