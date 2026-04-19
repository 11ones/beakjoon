// 2024년 11월 12일 22:55:20
// 맞았습니다!!
// 2020KB
// 40ms
#include <bits/stdc++.h>
using namespace std;

int g(int a, int b) {
  if (b) return g(b, a % b);
  return a;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int a, b, d;
    cin >> a >> b >> d;
    cout << (!(d % g(a, b)) || d == a || d == b ? "Yes\n" : "No\n");
  }
}