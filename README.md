# cp

My personal repository for competitive programming.

## Solved Problems

The solved problems will be put into the corresponding folder in `src/`.

The following items are the sites I will be practicing. Will be updated periodically.

- [atcoder](./src/atcoder)
- [codechef](./src/codechef)
- [codeforces](./src/codeforces)

Each items will be divided in *practice* and *contests*.

*Practice* are problems I have solved while practicing.

*Contests* are problems I have solved while in a contest.

## Solving Methods

Sometimes I will record how I solved some interesting problems. Those notes can be found [here](https://tllaw.github.io/cp).

Note that these notes are **not meant to be tutorials**, just my personal opinion on solving particular problem.

*(And I should recognize that I am not a professional competitive programmer, so the solutions may not be in the optimized forms.)*

If you are still interested in what I have noted, you may visit the sites I have mentioned above.

## Editor

I am using [vim](https://www.vim.org/) for competitive programming.

I am not a big fan of having a bunch of `#define` in my source code, so I shipped my shortcuts in [.vimrc](./.vimrc) and let vim "write" the code for me.

### Features

- Syntax highlight
- Highlight searching ignoring cases
  - for those who wants to remove highlights after searching, type `:noh` in NORMAL mode
- (Relative) Line number
- Tab size 4
  - You can change the tab size by editing the number after `sw=` and `ts=` at line 1

### Usage

If you do not have a `.vimrc` in your home directory (or if you're not sure where to start), copy the [.vimrc](./.vimrc) into your home directory.

Otherwise, just copy it to anywhere you like, rename it to `cp.vim`, and source it.

### Shortcut

#### NORMAL mode

The shortcuts in NORMAL mode are mostly executing bash commands.

<details>
<summary>File-related</summary>

- `,rm` (Remove): remove all tests case in folder `./tests`

</details>

<details>
<summary>Code-related</summary>

- `,ci` (Code Initialize): create a minimal starting code in the file
- `,cc` (Code Complete): code compile & test with test cases (tests are places in relative path `./tests`)

</details>

<details>
<summary>Git-related</summary>

- `,gc` (Git Commit): add the current file and commit
- `,gs` (Git Status): check the git status
- `,gl` (Git Log): check the git history in one line summary

</details>

#### INSERT mode

The shortcuts in INSERT mode are mostly abbreviations of code sections.

<details>
<summary>Data type</summary>

- basic
  - `ll`: `long long ;`
  - `ld`: `long double ;`

- vector
  - `V`: `vector<> v;`
  - `vi`: `vector<int> v;`
  - `vll`: `vector<long long> v;`

- priority_queue
  - `PQ`: `priority_queue<> q;`
  - `pqii`: `priority_queue<int> q;`
  - `pqir`: `priority_queue<int, vector<int>, greater<int>> q;`
  - `pqll`: `priority_queue<long long> q;`
  - `pqlr`: `priority_queue<long long, vector<long long>, greater<long long>> q;`

</details>

<details>
<summary>Loop</summary>

- `fori`: `for(long long i = 0; i < n; i++)`
- `forv`: `for(auto i = v.begin(); i != v.end(); i++)`

</details>

<details>
<summary>I/O</summary>

- `cin`: `cin >> ;`
- `cout`: `cout << << endl;`

</details>

<details>
<summary>Methods</summary>

- `to_s`: `to_string()`
- `pb`: `push_back();`

</details>

<details>
<summary>Misc</summary>

- `fff`: `ios::sync_with_stdio(0);cin.tie(0);`
- `ttt`: `long long t; cin >> t; while(t--) {;}`
- `{}`: `{;}` (Expand Curly Brackets)

</details>
