#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a[26] = {0}, r = 0;

  for(int i = 0; i < s.length(); i++)
    a[s[i] - 'a'] = 1;

  for(int i = 0; i < 26; i++)
    r += a[i];

  cout << (r % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
  return 0;
}
