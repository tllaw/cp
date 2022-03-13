#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, a;
  cin >> t;

  while(t--) {
    vector<long long> v;
    cin >> n;

    while(n--) {
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(auto i = (v).begin(); i != (v).end(); i++)
      cout << *i << " ";
    cout << endl;
  }

  return 0;
}
