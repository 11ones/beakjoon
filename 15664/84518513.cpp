// 2024년 9월 29일 22:16:53
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int m, n, x;
vector<int> v, t;

void run(int d, int u) {
  if (d == n) {
    for (auto e : t) {
      cout << e << " ";
    }
    cout << '\n';
    return;
  }
  for (int i = u; i < m; i++) {
    t.push_back(v[i]);
    run(d + 1, i + 1);
    t.pop_back();
    while (v[i] == v[i + 1]) {
      i++;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  run(0, 0);
}