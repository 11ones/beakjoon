// 2026년 3월 23일 15:55:35
// 맞았습니다!!
// 14116KB
// 368ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int L, M, K, C, c = 0, x;
  cin >> L >> M >> K >> C;
  queue<int> q;
  for (int i = 0; i < L; ++i) {
    if (c < M) ++c;
    cin >> x;
    if (!q.empty() && q.front() == i - M) q.pop();
    if (K * (c - q.size()) < x) {
      if (C < 1) {
        cout << "NO";
        return 0;
      }
      q.push(i);
      --C;
    }
  }
  cout << "YES";
}