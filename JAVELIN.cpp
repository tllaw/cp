#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, x, n, m, a;
  cin >> t;

  while(t--) {
    set<long long> s;
    vector<long long> v(3001, -1);
    cin >> n >> m >> x;

    for(long long i = 0; i < n; i++) {
      cin >> a;

      if(a >= m)
        s.insert(i + 1);
      else
        v[a - 5000] = i + 1;
    }

    for(long long i = 3000; i > -1 && s.size() < x; i--) {
      if(v[i] != -1)
        s.insert(v[i]);
    }

    cout << s.size();

    for(auto i = s.begin(); i != s.end(); i++)
      cout << " " << *i;

    cout << endl;
  }

  return 0;
}
