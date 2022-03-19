#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  string p, q;
  cin >> t;

  while(t--) {
    cin >> p >> q;

    for(long long i = 0; i < 5; i++)
      cout << (p[i] == q[i] ? "G" : "B");

    cout << endl;
  }

  return 0;
}
