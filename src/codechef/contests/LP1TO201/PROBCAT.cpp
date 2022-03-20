#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t, x;
  cin >> t;
  
  while(t--) {
    cin >> x;
    cout << (x < 100 ? "Easy" : (x < 200 ? "Medium" : "Hard")) << endl;
  }

  return 0;
}
