// 2024년 9월 18일 15:41:16
// 맞았습니다!!
// 3192KB
// 20ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t, x;
  cin >> n >> m;
  vector<int> v(n + 1);
  t = m + 1;
  for(int i = 1; i <= n; i++) {
    cin >> x;
    if(i >= t) v[i] = max(v[i - 1], v[i - m] + x);
  }
  cout << v[n];
}