// 2024년 12월 8일 16:46:58
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  queue<int> q;
  for(int i = 1; i <= n; i++) {
    q.push(i);
  }
  while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
    q.push(q.front());
    q.pop();
  }
}