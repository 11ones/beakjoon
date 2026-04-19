// 2024년 3월 11일 23:12:26
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int x, y;
    cin >> x >> y;
    int l = y - x;
    long long t = 0, i = 1;
    while (1) {
      t += i * 2;
      if (l <= t) {
        if (l <= t - i) {
          cout << i * 2 - 1 << '\n';
          break;
        } else {
          cout << i * 2 << '\n';
          break;
        }
      }
      i++;
    }
  }
}