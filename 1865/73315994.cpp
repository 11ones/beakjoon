// 2024년 2월 12일 23:42:51
// 맞았습니다!!
// 2420KB
// 440ms
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
    int n, m, w;
    cin >> n >> m >> w;
    int *r = new int[n];
    vector<B> *v = new vector<B>[n];
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
    fill_n(&r[0], n, 1'000'000'000);
    for (int o = 0; o < n; o++) {
      if (r[o] < 900'000'000) {
        continue;
      }
      r[o] = 0;
      for (int x = 0; x < n; x++) {
        for (int k = 0; k < n; k++) {
          auto &e = v[k];
          for (int i = 0; i < e.size(); i++) {
            if (r[e[i].b] > r[k] + e[i].c) {
              r[e[i].b] = r[k] + e[i].c;
              if (x == n - 1) {
                check = 1;
              }
            }
          }
        }
      }
    }
    if (check) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}