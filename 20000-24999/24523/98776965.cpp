// 2025년 9월 22일 16:35:02
// 맞았습니다!!
// 2020KB
// 216ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 1, t = 0, x;
  cin >> N >> t;
  for(int i = 2; i <= N; ++i) {
    cin >> x;
    if(x == t) ++c;
    else {
      while(c--) cout << i << " ";
      t = x, c = 1;
    }
  }
  while(c--) cout << "-1 ";
}