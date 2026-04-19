// 2026년 3월 14일 05:09:49
// 맞았습니다!!
// 14440KB
// 116ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<array<int, 2>> v;
  int N, f = 0, b = 0;
  cin >> N;
  while (N--) {
    int a;
    char c;
    cin >> a;
    if (a == 1) {
      cin >> c;
      v.push_back({b++, c});
    } else if (a == 2) {
      cin >> c;
      v.push_back({--f, c});
    } else if (!v.empty()) {
      v.pop_back();
    }
  }
  if (v.empty()) {
    cout << 0;
    return 0;
  }
  sort(v.begin(), v.end());
  for (auto e : v) cout << (char)e[1];
}