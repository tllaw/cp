set noswapfile is hls ic nu rnu si et sw=4 ts=4
syntax on
let mapleader=","
nn <leader>ci i#include <bits/stdc++.h><CR>using namespace std;<CR><CR>int main() {<CR>return 0;<CR>}<ESC>kO
nn <leader>cc :!g++ %<CR>:!for f in tests/*; do echo "TEST: $f"; cat $f; ./a.out < $f; done<CR>
nn <leader>gc :!git add % && git commit -m "[+] %"<CR>
nn <leader>gl :!git log --oneline<CR>
nn <leader>gs :!git status<CR>
nn <leader>rm :!rm tests/*<CR>
ino ll long long ;<Left>
ino ld long double ;<Left>
ino V vector<> v;<ESC>F>i
ino vi vector<int> v;
ino vll vector<long long> v;
ino PQ priority_queue<> q;<ESC>F>i
ino pqii priority_queue<int> q;
ino pqir priority_queue<int, vector<int>, greater<int>> q;
ino pqll priority_queue<long long> q;
ino pqlr priority_queue<long long, vector<long long>, greater<long long>> q;
ino fori for(long long i = 0; i < n; i++)
ino forv for(auto i = v.begin(); i != v.end(); i++)
ino cin cin >> ;<Left>
ino cout cout <<  << endl;<ESC>bbhi
ino to_s to_string()<Left>
ino pb push_back();<Left><Left>
ino fff ios::sync_with_stdio(0);<CR>cin.tie(0);<CR>
ino ttt long long t;<CR>cin >> t;<CR><CR>while(t--) {<CR>;<CR>}<CR><ESC>kklli
ino {} {<CR>;<CR>}<Up><Right>
