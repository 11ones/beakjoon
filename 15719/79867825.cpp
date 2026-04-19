// 2024년 6월 20일 22:36:34
// 맞았습니다!!
// 2020KB
// 1264ms
#include <iostream>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  l n, t, x;
  cin >> n;
  x = n * (n - 1) / 2;
  for(int i = 0; i < n; i++) {
    cin >> t;
    x -= t;
  }
  cout << -x;
}