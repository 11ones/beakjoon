// 2026년 2월 23일 05:58:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, H, W, x;
  cin >> N >> H >> W;
  while(N--) {
    cin >> x;
    cout << (H * H + W * W >= x * x ? "DA\n" : "NE\n");
  }
}