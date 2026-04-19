// 2024년 6월 30일 17:45:44
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <queue>
#include <vector>
#define MOD 1234567
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  int d[1001][11] = {};
  vector<int> v[10] = {{7},          {2, 4},    {1, 3, 5}, {2, 6},    {1, 5, 7},
                       {2, 4, 6, 8}, {3, 5, 9}, {0, 4, 8}, {5, 7, 9}, {6, 8}};
  for (int i = 0; i <= 9; i++) {
    d[1][i] = 1;
  }
  d[1][10] = 10;
  for (int i = 1; i < 1000; i++) {
    for (int j = 0; j <= 9; j++) {
      for (auto e : v[j]) {
        d[i + 1][e] = (d[i + 1][e] + d[i][j]) % MOD;
      }
    }
    int sum = 0;
    for(int j = 0; j <= 9; j++) {
      sum += d[i + 1][j];
    }
    d[i + 1][10] = sum % MOD;
  }

  for (int o = 0; o < t; o++) {
    int n;
    cin >> n;
    cout << d[n][10] << '\n';
  }
}