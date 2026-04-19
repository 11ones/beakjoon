// 2025년 10월 12일 00:13:47
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b;
  cin >> N >> M;
  vector<pair<int, char>> v(M);
  for (auto &e : v) {
    cin >> a >> b >> e.second;
    e.first = b * N + a;
  }
  sort(v.begin(), v.end());
  for(auto e : v) cout << e.second;
}