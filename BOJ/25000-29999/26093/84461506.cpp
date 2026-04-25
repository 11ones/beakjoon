// 2024년 9월 28일 15:50:08
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  array<array<int, 10000>, 100> a, d;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cin >> a[i][j];
      v.push_back(a[i][j]);
    }
  }
  d[0] = a[0];
  for (int i = 1; i < n; i++) {
    sort(v.begin(), v.end(), greater<>());
    vector<int> t;
    for (int j = 0; j < k; j++) {
      if (v[0] == d[i - 1][j]) {
        d[i][j] = v[1];
      } else {
        d[i][j] = v[0];
      }
      d[i][j] += a[i][j];
      t.push_back(d[i][j]);
    }
    v = t;
  }
  sort(v.begin(), v.end(), greater<>());
  cout << v[0];
}