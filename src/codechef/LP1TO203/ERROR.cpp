#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  string s;
  cin >> t;

  while(t--) {
    cin >> s;
    cout << (s.find("101") != string::npos || s.find("010") != string::npos ? "Good" : "Bad") << endl;
  }

  return 0;
}
