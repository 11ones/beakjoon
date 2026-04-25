// 2024년 7월 20일 15:52:23
// 맞았습니다!!
// 2020KB
// 60ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x;
  cin >> n >> m;
  int o = 0, z = 0;
  bool chk1 = 1, chk2 = 1, t1 = 0, t2 = 1;
  for (int i = 0; i < n; i++) {
    bool tt1 = t1, tt2 = t2;
    for (int j = 0; j < m; j++) {
      cin >> x;
      if(tt1 != x) {
        chk1 = 0;
      }
      if(tt2 != x) {
        chk2 = 0;
      }
      tt1 = !tt1;
      tt2 = !tt2;
      if (x) {
        o++;
      } else {
        z++;
      }
    }
    t1 = !t1;
    t2 = !t2;
  }
  if (o % 2 || z % 2 || chk1 || chk2) {
    cout << -1;
    return 0;
  }
  cout << 1;
}