// 2026년 1월 4일 22:15:20
// 100점
// 2416KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, t;
  cin >> N;
  queue<int> q;
  while (1) {
    cin >> t;
    if (t == -1) break;
    if (!t) q.pop();
    if (t && q.size() < N) q.push(t);
  }
  if (q.empty()) cout << "empty";
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
}