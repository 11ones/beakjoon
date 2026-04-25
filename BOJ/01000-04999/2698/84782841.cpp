// 2024년 10월 5일 15:47:12
// 맞았습니다!!
// 2284KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  typedef vector<array<long long, 2>> vi;
  vector<vi> v(101, vi(101));
  v[1][0] = {1, 1};
  for (int i = 2; i < 101; i++) {
    v[i][0] = {v[i - 1][0][1] + v[i - 1][0][0], v[i - 1][0][0]};
    for (int j = 1; j < 101; j++) {
      v[i][j] = {v[i - 1][j][0] + v[i - 1][j][1], v[i - 1][j][0] + v[i - 1][j - 1][1]};
    }
  }

  int tc;
  cin >> tc;
  while (tc--) {
    int n, k;
    cin >> n >> k;
    cout << v[n][k][0] + v[n][k][1] << '\n';
  }
}