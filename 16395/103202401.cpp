// 2026년 2월 23일 05:55:59
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x, y;
  vector<vector<int>> v(31, vector<int>(31));
  v[1][1] = 1;
  for(int i = 2; i < 31; ++i) {
    for(int j = 1; j <= i; ++j) {
      v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
    }
  }
  cin >> x >> y;
  cout << v[x][y];
}