// 2024년 9월 7일 23:16:48
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n, k;
  cin >> m >> n >> k;
  int t = min(m / 2, n);
  cout << t + min((m + n - k - t * 3 - 2) / 3, 0);
}