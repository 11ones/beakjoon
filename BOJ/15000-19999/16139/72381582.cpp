// 2024년 1월 25일 23:21:30
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  string s;
  cin >> s;
  vector<int> v[26];
  for (int i = 0; i < s.length(); i++) {
    v[s[i] - 'a'].push_back(i);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    char a;
    int l, r;
    cin >> a >> l >> r;
    auto vt = v[a - 'a'];
    if (vt.empty()) {
      cout << "0\n";
    } else {
      int tr = lower_bound(vt.begin(), vt.end(), r) - vt.begin();
      int tl = lower_bound(vt.begin(), vt.end(), l) - vt.begin();
      if (vt[tr] > r)
        cout << "0\n";
      else
        cout << tr - tl + 1 << '\n';
    }
  }
}