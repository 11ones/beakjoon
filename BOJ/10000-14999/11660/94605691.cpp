// 2025년 5월 21일 20:48:22
// 맞았습니다!!
// 6264KB
// 132ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N, M, x;
  cin >> N >> M;
  vector<vector<int>> v(N + 1, vector<int>(N + 1));
  for(int i = 1; i <= N; ++i) {
    for(int j = 1; j <= N; ++j) {
      cin >> x;
      v[i][j] = x + v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
    }
  }
  while(M--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << v[c][d] - v[a - 1][d] - v[c][b - 1] + v[a - 1][b - 1] << '\n';
  }
}