// 2026년 3월 1일 22:47:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  long MOD = 1'000'000'000, D[101][10][1024] = {}, N, c = 0;
  cin >> N;
  for (int i = 1; i < 10; ++i) {
    D[1][i][1 << i] = 1;
  }
  for (int i = 1; i < 101; ++i) {
    for (int k = 0; k < 1024; ++k) {
      D[i][0][k | 1] = (D[i][0][k | 1] + D[i - 1][1][k]) % MOD;
      D[i][9][k | 512] = (D[i][9][k | 512] + D[i - 1][8][k]) % MOD;
    }
    for (int j = 1; j < 9; ++j) {
      for (int k = 0; k < 1024; ++k) {
        D[i][j][k | (1 << j)] = (D[i][j][k | (1 << j)] + D[i - 1][j - 1][k] + D[i - 1][j + 1][k]) % MOD;
      }
    }
  }
  for (int i = 0; i < 10; ++i) c += D[N][i][1023];
  cout << c;
}