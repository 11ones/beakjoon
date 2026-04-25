// 2024년 9월 7일 23:14:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int m, n, k;
  cin >> m >> n >> k;
  int t = min(m / 2, n);
  cout << t + min((m + n - k - t * 3) / 3, 0);
}