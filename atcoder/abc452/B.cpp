#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int H, W;
  cin >> H >> W;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cout << (i == 0 || j == 0 || i == H - 1 || j == W - 1 ? '#' : '.');
    }
    cout << '\n';
  }
}