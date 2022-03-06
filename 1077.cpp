#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  unordered_map<char, int> m;
  m['^'] = 3;
  m['*'] = 2;
  m['/'] = 2;
  m['+'] = 1;
  m['-'] = 1;

  while(n--) {
    vector<char> v;
    string s;
    cin >> s;

    for(long long i = 0; i < s.length(); i++) {
      if(s[i] == ')') {
        while(v.back() != '(') {
          cout << v.back();
          v.pop_back();
        }

        v.pop_back();
      } else if(s[i] == '(') {
        v.push_back(s[i]);
      } else if(m.count(s[i])) {
        while(!v.empty() && v.back() != '(' && m[v.back()] >= m[s[i]]) {
          cout << v.back();
          v.pop_back();
        }

        v.push_back(s[i]);
      } else
        cout << s[i];
    }

    while(!v.empty()) {
      cout << v.back();
      v.pop_back();
    }

    cout << endl;
  }

  return 0;
}
