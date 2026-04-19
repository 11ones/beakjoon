// 2025년 10월 28일 14:52:13
// 맞았습니다!!
// 14436KB
// 256ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long N, K, a, b, s = 0;
  cin >> N >> K;
  priority_queue<array<long, 2>, vector<array<long, 2>>, greater<>> q, p;
  for(int i = 0; i < N; ++i) {
    cin >> a >> b;
    q.push({a, b});
  }
  for(int i = 1; i <= K; ++i) {
    while (!q.empty() && q.top()[0] == i) {
      p.push({q.top()[1], q.top()[0]});
      q.pop();
    }
    while (!p.empty() && p.top()[0] < i) {
      s -= i - p.top()[1];
      p.pop();
    }
    s += p.size();
    cout << s << " ";
  }
}