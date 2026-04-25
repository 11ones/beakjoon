// 2024년 11월 3일 15:41:00
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, g;
  cin >> n >> t >> g;
  array<int, 100000> a;
  fill(a.begin(), a.end(), 1e8);
  queue<int> q;
  q.push(n);
  a[n] = 0;
  while (!q.empty()) {
    auto x = q.front();
    q.pop();
    if (a[x] >= t) continue;
    if (x < 99999 && a[x + 1] > a[x] + 1) {
      a[x + 1] = a[x] + 1;
      q.push(x + 1);
    }
    if (x != 0) {
      auto s = to_string(x * 2);
      s[0]--;
      int y = stoi(s);
      if (y <= 99999 && a[y] > a[x] + 1) {
        a[y] = a[x] + 1;
        q.push(y);
      }
    }
  }
  cout << (a[g] > 1e7 ? "ANG" : to_string(a[g]));
}