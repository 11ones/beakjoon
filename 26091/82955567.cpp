// 2024년 8월 25일 13:53:34
// 맞았습니다!!
// 2412KB
// 20ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  auto f = v.begin(), b = v.end();
  b--;
  int cnt = 0;
  while (f < b) {
    if (*f + *b < m) {
      f++;
    } else {
      cnt++;
      b--;
      f++;
    }
  }
  cout << cnt;
}