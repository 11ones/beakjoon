// 2025년 3월 19일 21:19:16
// 맞았습니다!!
// 20768KB
// 232ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, t, c = 0;
  cin >> n >> m;
  set<int> a, b;
  while (n--) {
    cin >> t;
    a.insert(t);
  }
  while (m--) {
    cin >> t;
    b.insert(t);
  }
  for(auto e : a) {
    c += b.count(e);
  }
  for(auto e : b) {
    c += a.count(e);
  }
  cout << a.size() + b.size() - c;
}