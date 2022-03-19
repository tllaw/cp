#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long long> v;
  long long n, d, l, r = 0, a;
  cin >> n >> d;

  while(n--) {
    cin >> l;
    v.push_back(l);
  }

  sort(v.begin(), v.end(), greater<long long>());

  while(v.size()) {
    a = v.back();
    v.pop_back();
    if(v.size() && v.back() - a <= d) {
      v.pop_back();
      r++;
    }
  }

  cout << r << endl;
  return 0;
}
