// 2024년 8월 15일 16:11:03
// 맞았습니다!!
// 3980KB
// 28ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n), r(n), kmp(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    v.push_back(v[i]);
    cin >> r[i];
  }
  int t = 0;
  for (int i = 1; i < n; i++) {
    if (t && r[t] != r[i]) {
      t = kmp[--t];
    } else {
      kmp[i] = ++t;
    }
  }
  t = 0;
  for (int i = 0; i < 2 * n; i++) {
    while (t && r[t] != v[i]) {
      t = kmp[t - 1];
    }
    if (r[t] == v[i]) {
      t++;
      if (t == n) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
}