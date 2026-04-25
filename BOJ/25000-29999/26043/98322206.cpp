// 2025년 9월 9일 17:33:07
// 맞았습니다!!
// 9420KB
// 140ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, a, b, c;
  cin >> N;
  array<vector<int>, 3> v;
  queue<array<int, 2>> q;
  while (N--) {
    cin >> a >> b;
    if (a == 1) {
      cin >> c;
      q.push({b, c});
      continue;
    }
    if (q.front()[1] == b)
      v[0].push_back(q.front()[0]);
    else
      v[1].push_back(q.front()[0]);
    q.pop();
  }
  while (!q.empty()) {
    v[2].push_back(q.front()[0]);
    q.pop();
  }
  for (int i = 0; i < 3; ++i) {
    if (v[i].empty()) {
      cout << "None\n";
      continue;
    }
    sort(v[i].begin(), v[i].end());
    for (int &e : v[i]) {
      cout << e << " ";
    }
    cout << '\n';
  }
}