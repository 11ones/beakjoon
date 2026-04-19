// 2025년 9월 22일 16:34:19
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
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