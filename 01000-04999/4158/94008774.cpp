// 2025년 5월 7일 20:19:34
// 맞았습니다!!
// 9952KB
// 448ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N, M;
  while (1) {
    int c = 0;
    cin >> N >> M;
    if(N + M == 0) return 0;
    vector<int> a(N), b(M);
    for (int &e : a) cin >> e;
    for (int &e : b) cin >> e;
    auto x = a.begin(), y = b.begin();
    while (x != a.end() && y != b.end()) {
      if(*x > *y) ++y;
      else if(*y > *x) ++x;
      else {
        ++x;
        ++y;
        ++c;
      }
    }
    cout << c << '\n';
  }
}