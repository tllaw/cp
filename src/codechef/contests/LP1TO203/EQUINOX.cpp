#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, n, a, b;
  cin >> t;

  while(t--) {
    long long r = 0;
    string p, c = "EQUINOX";
    cin >> n >> a >> b;

    while(n--) {
      cin >> p;
      r += c.find(p[0]) != string::npos ? a : -b;
    }
  
    cout << (r == 0 ? "DRAW" : (r > 0 ? "SARTHAK" : "ANURADHA")) << endl;
  }

  return 0;
}
