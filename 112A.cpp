#include <bits/stdc++.h>
using namespace std;

int main() {
  string m, n;
  cin >> m >> n;

  transform(m.begin(), m.end(), m.begin(), ::tolower);
  transform(n.begin(), n.end(), n.begin(), ::tolower);

  cout << (m > n ? 1 : (m < n ? -1 : 0)) << endl;
  return 0;
}
