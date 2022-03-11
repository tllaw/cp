#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, w;
  long long n;
  cin >> s >> n;

  while(n--) {
    string r = "Yes";
    cin >> w;

    for(long long i = 0; i < w.length(); i++) {
      if(s.find(w[i]) == string::npos) {
        r = "No";
        break;
      }
    }

    cout << r << endl;
  }

  return 0;
}
