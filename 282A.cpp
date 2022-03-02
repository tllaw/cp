#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r = 0;
  cin >> n;

  while(n--) {
    string s;
    cin >> s;
    r += (s[1] == '+') ? 1 : -1;
  }

  cout << r << endl;
  return 0;
}
