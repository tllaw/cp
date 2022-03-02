#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  vector<char> v;
  cin >> s;

  for(int i = 0; i < s.length(); i += 2)
    v.push_back(s[i]);

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << (i == 0 ? "" : "+") << v[i];

  cout << endl;
  return 0;
}
