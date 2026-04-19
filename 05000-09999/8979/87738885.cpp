// 2024년 12월 23일 19:48:46
// 20점
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, i;
  cin >> n >> k;
  vector<array<int, 4>> v(n);
  for (i = 0; i < n; i++) {
    cin >> v[i][3] >> v[i][0] >> v[i][1] >> v[i][2];
  }
  sort(v.begin(), v.end(), greater<>());
  int c = 1;
  for (i = 0; i < n; i++) {
    if (i && (v[i][0] != v[i - 1][0] || v[i][1] != v[i - 1][1] || v[i][2] != v[i - 1][2])) {
      c++;
    }
    if (v[i][3] == k) {
      cout << c;
      break;
    }
  }
}