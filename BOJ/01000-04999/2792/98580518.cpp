// 2025년 9월 16일 21:46:24
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, M, a;
  cin >> N >> M;
  N -= M;
  priority_queue<int> q;
  while(M--) {
    cin >> a;
    q.push(a);
  }
  while(N--) {
    q.push(q.top() / 2);
    q.push((q.top() + 1) / 2);
    q.pop();
  }
  cout << q.top();
}