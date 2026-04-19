// 2025년 3월 19일 20:48:08
// 맞았습니다!!
// 2156KB
// 340ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> q;

  for (int i = 0; i < n * n; i++) {
    cin >> t;
    q.push(t);
    if(q.size() > n) {
      q.pop();
    }
  }
  cout << q.top();
}