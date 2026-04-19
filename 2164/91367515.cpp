// 2025년 3월 14일 13:57:17
// 맞았습니다!!
// 4156KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  queue<int> q;
  int n;
    cin >> n;
  for(int i = 1; i <= n; i++) {
    q.push(i);
  }
  while(q.size() > 1) {
    q.pop();
    q.push(q.front());
    q.pop();
  }
  cout << q.front();
}