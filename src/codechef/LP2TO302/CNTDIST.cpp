#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a;
  set<long long> s;
  cin >> n;

  while(n--) {
    cin >> a;
    s.insert(a);
  }

  cout << 2 << endl << s.size() << endl;
  return 0;
}
