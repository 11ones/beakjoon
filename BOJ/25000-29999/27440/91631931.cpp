// 2025년 3월 19일 12:50:46
// 맞았습니다!!
// 3612KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long n;
  cin >> n;
  map<long, int> m;
  queue<long> q;
  q.push(n);
  while (!q.empty()) {
    long t = q.front();
    if(t == 1) break;
    q.pop();
    if (!(t % 3) && (!m[t / 3] || m[t / 3] > m[t] + 1)) {
      m[t / 3] = m[t] + 1;
      q.push(t / 3);
    }
    if (!(t % 2) && (!m[t / 2] || m[t / 2] > m[t] + 1)) {
      m[t / 2] = m[t] + 1;
      q.push(t / 2);
    }
    if (!m[t - 1] || m[t - 1] > m[t] + 1) {
      m[t - 1] = m[t] + 1;
      q.push(t - 1);
    }
  }
  cout << m[1];
}