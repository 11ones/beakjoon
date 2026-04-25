// 2024년 7월 13일 13:33:41
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int d[1001] = {0, 1, -1, 1, 1};
  for (int i = 5; i <= n; i++) {
    if (d[i - 1] + d[i - 3] + d[i - 4] == 3) {
      d[i] = -1;
    } else {
      d[i] = 1;
    }
  }
  cout << (d[n] == 1 ? "SK" : "CY");
}