// 2026년 3월 4일 22:57:47
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

bool r(vector<int> t, vector<int> u) {
  if (t.size() == v.size()) {
    for (auto e : u) cout << e << " ";
    return 1;
  }
  for (auto e : v) {
    for (auto f : t) {
      if (e == f) {
        goto E;
      }
    }
    for (int j = 0; j < N * 2; ++j) {
      if (u[j] == -1) {
        if (u[j + e + 1] == -1) {
          u[j] = u[j + e + 1] = e;
          t.push_back(e);
          if (r(t, u)) return 1;
          t.pop_back();
          u[j] = u[j + e + 1] = -1;
        }
        break;
      }
    }
  E:;
  }
  return 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> N;
  vector<int> u(N * 2, -1);
  v.resize(N);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  if (!r({}, u)) {
    cout << -1;
  }
}
