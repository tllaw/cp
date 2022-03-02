#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a[6];
  for(long long i = 0; i < 6; i++)
    cin >> a[i];

  cout << ((a[0] > a[3]) + (a[1] > a[4]) + (a[2] > a[5])) << " ";
  cout << ((a[0] < a[3]) + (a[1] < a[4]) + (a[2] < a[5])) << endl;
  return 0;
}
