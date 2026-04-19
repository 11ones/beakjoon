// 2024년 11월 21일 22:46:05
// 100점
// 7884KB
// 44ms
#include <bits/stdc++.h>
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  l n, mx = 0;
  cin >> n;
  vector<l> v(n);
  vector<array<l, 2>> d(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  d[0] = {v[0], 0};
  for (int i = 1; i < n; i++) {
    d[i] = {max(d[i - 1][0], d[i - 1][1]) + v[i], d[i - 1][0] + 1};
  }
  mx = max(d[n - 1][0], d[n - 1][1]);
  fill(&d[0][0], &d[n - 1][2], 0);
  d[0] = {0, 1};
  for (int i = 1; i < n; i++) {
    d[i] = {max(d[i - 1][0], d[i - 1][1]) + v[i], d[i - 1][0] + 1};
  }
  mx = max(mx, d[n - 1][0]);
  cout << mx;
}