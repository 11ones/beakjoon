// 2024년 2월 12일 23:21:35
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct B {
  int c;
  int b;
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int g = 0; g < tc; g++) {

    int r[500];
    vector<B> v[500]{};

    int n, m, w;
    cin >> n >> m >> w;
    for (int i = 0; i < m; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      v[a - 1].push_back({c, b - 1});
      v[b - 1].push_back({c, a - 1});
    }
    for (int i = 0; i < w; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      v[a - 1].push_back({-c, b - 1});
    }

    bool check = 0;
    fill_n(&r[0], 500, 1'000'000'000);

    for (int x = 0; x < n; x++) {
      for (int k = 0; k < n; k++) {
        auto &e = v[k];
        for (int i = 0; i < e.size(); i++) {
          if (r[e[i].b] > r[k] + e[i].c) {
            r[e[i].b] = r[k] + e[i].c;
          }
        }
      }
    }
    for (int k = 0; k < n; k++) {
      auto &e = v[k];
      for (int i = 0; i < e.size(); i++) {
        if (r[e[i].b] > r[i] + e[i].c) {
          check = 1;
          break;
        }
      }
      if (check) {
        break;
      }
    }
    if (check) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}