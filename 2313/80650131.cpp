// 2024년 7월 7일 15:48:51
// 맞았습니다!!
// 2156KB
// 932ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  vector<pair<int, int>> p;
  long long mx = 0;
  for (int o = 0; o < t; o++) {
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      v[i] += v[i - 1];
    }
    int tmx = -100'000, s = 0, e = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j <= n; j++) {
        if (v[j] - v[i] < tmx || (v[j] - v[i] == tmx && e - s <= j - i - 1)) {
          continue;
        }
        tmx = v[j] - v[i];
        s = i + 1;
        e = j;
      }
    }
    mx += tmx;
    p.push_back({s, e});
  }
  cout << mx << '\n';
  for (auto e : p) {
    cout << e.first << " " << e.second << '\n';
  }
}