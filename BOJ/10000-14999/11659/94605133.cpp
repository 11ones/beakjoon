// 2025년 5월 21일 20:34:01
// 맞았습니다!!
// 2412KB
// 36ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N, M, x, y;
  cin >> N >> M;
  vector<int> v(N + 1);
  for(int i = 1; i <= N; ++i) {
    cin >> x;
    v[i] = v[i - 1] + x;
  }
  while(M--) {
    cin >> x >> y;
    cout << v[y] - v[x - 1] << '\n';
  }
}