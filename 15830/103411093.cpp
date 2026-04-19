// 2026년 3월 1일 21:27:46
// 50점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  double V, W, D;
  int c = -1;
  cin >> V >> W >> D;
  while(D >= 0) {
    D -= 5 * pow(W / V, 2);
    V *= 0.8;
    ++c;
  }
  cout << c;
}