#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, n, s;
  cin >> t;

  while(t--) {
    vector<long long> v;
    long long m = INT_MAX;
    cin >> n;

    while(n--) {
      cin >> s;
      v.push_back(s);
    }

    sort(v.begin(), v.end());

    for(long long i = 1; i < v.size(); i++)
      m = v[i] - v[i - 1] < m ? v[i] - v[i - 1] : m;

    cout << m << endl;
  }
  return 0;
}
