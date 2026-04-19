// 2026년 2월 23일 05:48:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x;
  long v[491] = {0, 1, 1, 2, };
  for(int i = 2; i <= 490; ++i) {
    v[i] = v[i - 1] + v[i - 2];
  }
  while(1) {
    cin >> x;
    if(x == -1) return 0;
    cout << "Hour " << x << ": " << v[x] << " cow(s) affected\n";
  }
}