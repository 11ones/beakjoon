// 2025년 10월 12일 00:13:07
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b;
  cin >> N >> M;
  vector<pair<int, char>> v(M);
  for (auto &e : v) {
    cin >> a >> b >> e.second;
    e.first = b * N + M;
  }
  sort(v.begin(), v.end());
  for(auto e : v) cout << e.second;
}