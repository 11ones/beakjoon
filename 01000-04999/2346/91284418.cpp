// 2025년 3월 12일 20:28:11
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  deque<array<int, 2>> q;
  for(int i = 1; i <= n; i++) {
    cin >> t;
    q.push_back({i, t});
  }
  while(!q.empty()) {
    cout << q.front()[0] << " ";
    t = q.front()[1];
    q.pop_front();
    if(t > 0) {
      for(int i = 0; i < t - 1; i++) {
        q.push_back(q.front());
        q.pop_front();
      }
    } else {
      for(int i = 0; i > t; i--) {
        q.push_front(q.back());
        q.pop_back();
      }
    }
  }
}