#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long H, W, c = 0;
  cin >> H >> W;
  vector<vector<char>> v(H, vector<char>(W));
  for (auto &e : v)
    for (auto &f : e) cin >> f;
  for (int h1 = 0; h1 < H; ++h1) {
    for (int h2 = h1; h2 < H; ++h2) {
      for (int w1 = 0; w1 < W; ++w1) {
        for (int w2 = w1; w2 < W; ++w2) {
          for (int i = h1; i <= h2; ++i) {
            for (int j = w1; j <= w2; ++j) {
              if (v[i][j] != v[h1 + h2 - i][w1 + w2 - j]) goto E;
            }
          }
          ++c;
        E:;
        }
      }
    }
  }
  cout << c;
}