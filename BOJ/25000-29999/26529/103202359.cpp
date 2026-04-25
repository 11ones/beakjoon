// 2026년 2월 23일 05:45:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  cin >> N;
  int v[46] = {1, 1, 2, };
  for(int i = 2; i <= 45; ++i) {
    v[i] = v[i - 1] + v[i - 2];
  }
  while(N--) {
    cin >> x;
    cout << v[x] << '\n';
  }
}