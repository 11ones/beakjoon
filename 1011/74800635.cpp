// 2024년 3월 11일 23:07:37
// 시간 초과
// KB
// ms
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
    int t = 0, i = 1;
    while (1) {
      t += i;
      if (l <= t) {
        cout << i * 2 - 1 << '\n';
        break;
      }
      t += i;
      if (l <= t) {
        cout << i * 2 << '\n';
        break;
      }
      i++;
    }
  }
}