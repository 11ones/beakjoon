// 2025년 9월 16일 22:14:18
// 맞았습니다!!
// 3192KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, M;
  cin >> N >> M;
  vector<int> v(M);
  for (int &e : v) cin >> e;
  int S = 1, E = 1e9;
  while (S < E) {
    int s = 0, m = (S + E) / 2;
    for (int e : v) s += (e + m - 1) / m;
    if(s > N) S = m + 1;
    else E = m;
  }
  cout << E;
}