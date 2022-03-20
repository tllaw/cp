#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, a;
  cin >> t;

  while(t--) {
    cin >> n;
    vector<long long> u, v;

    while(n--) {
      cin >> a;
      (a % 2 ? u : v).push_back(a);
    }

    if(u.size() > 1 && (u.size() % 2 == 0 || v.size() > 0)) {
      for(long long i = 0; i < u.size() - u.size() % 2; i++)
        cout << u[i] << " ";

      for(long long i = 0; i < v.size(); i++)
        cout << v[i] << " ";

      if(u.size() % 2)
        cout << u.back();
    } else
      cout << -1;

    cout << endl;
  }

  return 0;
}
