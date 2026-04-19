// 2024년 8월 3일 23:31:09
// 맞았습니다!!
// 8292KB
// 116ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, b = 0, c = 1000001, s = 0;
  cin >> n;
  vector<pair<int, int>> v;
  v.push_back({b, s});
  for (int i = 0; i < n; i++) {
    int a, tb, tc;
    cin >> a;
    if (a == 1) {
      v.push_back({b, c});
      cin >> tb >> tc;
      b = tb;
      c = --tc;
    } else {
      if (!c) {
        s += b;
        b = v.back().first;
        c = v.back().second;
        v.pop_back();
      }
      c--;
    }
    if (!c) {
      s += b;
      b = v.back().first;
      c = v.back().second;
      v.pop_back();
    }
  }
  cout << s;
}