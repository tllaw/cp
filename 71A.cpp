#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  while(n--) {
    string s;
    cin >> s;
    cout << (s.length() > 10 ? (s[0] + to_string(s.length() - 2) + s[s.length() - 1]) : s) << endl;
  }

  return 0;
}
