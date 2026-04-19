// 2024년 7월 1일 23:05:54
// 런타임 에러 (Segfault)
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i <= n - m; i++) {
      v.push_back(s.substr(i, m));
    }
    sort(v.begin(), v.end());
    string f;
    for (int i = 0; i < m; i++) {
      f += "a";
    }
    auto t = v.begin();
    while (1) {
      if (f == *t) {
        t++;
        f[m - 1]++;
        for (int i = m - 1; i >= 0; i--) {
          if (f[i] > 'a' + k - 1) {
            f[i] = 'a';
            f[i - 1]++;
          }
        }
        continue;
      }
      cout << f << '\n';
      break;
    }
  }
}