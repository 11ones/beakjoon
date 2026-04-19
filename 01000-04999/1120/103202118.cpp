// 2026년 2월 23일 04:50:14
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int m, c, l;
  string a, b;
  cin >> a >> b;
  m = l = a.size();
  for (int i = 0; i <= b.size() - l; ++i) {
    c = 0;
    for (int j = 0; j < l; ++j) {
      if(b[i + j] == a[j]) ++c;
    }
    m = min(m, l - c);
  }
  cout << m;
}