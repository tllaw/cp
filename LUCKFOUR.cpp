#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while(t--) {
    long long n = 0;
    string s;
    cin >> s;

    for(long long i = 0; i < s.length(); i++) {
      if(s[i] == '4')
        n++;
    }

    cout << n << endl;
  }

  return 0;
}
