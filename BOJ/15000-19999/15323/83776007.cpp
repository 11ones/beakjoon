// 2024년 9월 11일 22:50:43
// 맞았습니다!!
// 6704KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int k, n;
  cin >> k >> n;
  vector<string> v[26];
  array<array<int, 2>, 26> a{};
  for (int i = 0; i < k; i++) {
    string s;
    cin >> s;
    v[s[0] - 'a'].push_back(s);
  }
  for (int i = 0; i < 26; i++) {
    sort(v[i].begin(), v[i].end());
    a[i][0] = v[i].size();
  }
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    c -= 'a';
    cout << v[c][a[c][1]++ % a[c][0]] << '\n';
  }
}