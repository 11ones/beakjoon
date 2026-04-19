// 2025년 5월 21일 20:58:00
// 100점
// 28868KB
// 128ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int n, l;
  cin >> s >> n;
  l = s.size();
  vector<vector<int>> v(l + 1, vector<int>(26));
  for(int i = 1; i <= l; ++i) {
    for(int j = 0; j < 26; ++j) {
      v[i][j] = v[i - 1][j] + (s[i - 1] == 'a' + j ? 1 : 0);
    }
  }
  while(n--) {
    char c;
    int a, b;
    cin >> c >> a >> b;
    cout << v[b + 1][c - 'a'] - v[a][c - 'a'] << '\n';
  }
}