// 2024년 4월 21일 14:40:19
// 맞았습니다!!
// 2152KB
// 8ms
#include <iostream>
#define MOD 1'000'000'000
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int **d = new int *[k];
  for (int i = 0; i < k; i++) {
    d[i] = new int[n + 1]{};
  }
  fill(&d[0][0], &d[0][n + 1], 1);
  for (int o = 1; o < k; o++) {
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        if (i + j > n) {
          break;
        }
        d[o][i + j] = (d[o][i + j] + d[o - 1][i]) % MOD;
      }
    }
  }
  cout << d[k - 1][n];
}