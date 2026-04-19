// 2025년 10월 28일 14:47:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, K, a, b, s = 0;
  cin >> N >> K;
  priority_queue<array<int, 2>, vector<array<int, 2>>, greater<>> q, p;
  for(int i = 0; i < N; ++i) {
    cin >> a >> b;
    q.push({a, b});
  }
  for(int i = 1; i <= K; ++i) {
    while (!q.empty() && q.top()[0] == i) {
      p.push(q.top());
      q.pop();
    }
    while (!p.empty() && p.top()[1] < i) {
      s -= i - p.top()[0];
      p.pop();
    }
    s += p.size();
    cout << s << " ";
  }
}