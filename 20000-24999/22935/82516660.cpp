// 2024년 8월 15일 16:55:02
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int x;
    cin >> x;
    x %= 29;
    if (x > 15) {
      x = 30 - x;
    }
    int c[4] = {8, 4, 2, 1};
    for(int i = 0; i < 4; i++) {
      if((x & c[i]) == c[i]) {
        cout << "딸기";
      } else {
        cout << "V";
      }
    }
    cout << '\n';
  }
}