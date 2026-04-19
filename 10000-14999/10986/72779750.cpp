// 2024년 2월 1일 22:48:57
// 맞았습니다!!
// 5928KB
// 144ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x;
  cin >> n >> m;
  int *arr = new int[n + 1] {};
  int *c = new int[m] {};

  for (int i = 1; i <= n; i++) {
    cin >> x;
    arr[i] = (x + arr[i - 1]) % m;
  }
  for (int i = 0; i <= n; i++) {
    c[arr[i]]++;
  }
  long long ans = 0;
  for (int i = 0; i < m; i++) {
    if (c[i] >= 2) {
      ans += (long long)c[i] * (c[i] - 1) / 2;
    }
  }
  cout << ans;
}