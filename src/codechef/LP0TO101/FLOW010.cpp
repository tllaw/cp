#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<char, string> m = {{'B', "BattleShip"}, {'C', "Cruiser"}, {'D', "Destroyer"}, {'F', "Frigate"}};
  long long t;
  char c;
  cin >> t;

  while(t--) {
    cin >> c;
    cout << m[toupper(c)] << endl;
  }

  return 0;
}
