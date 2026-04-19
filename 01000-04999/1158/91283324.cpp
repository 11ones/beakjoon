// 2025년 3월 12일 20:09:05
// 맞았습니다!!
// 2152KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k, t;
  cin >> n >> k;
  queue<int> q;
  for(int i = 0; i < n; ++i) {
    q.push(i + 1);
  }
  cout << "<";
  while(!q.empty()) {
    for(int i = 0; i < k - 1; ++i) {
      q.push(q.front());
      q.pop();
    }
    cout << q.front();
    q.pop();
    cout << (q.empty() ? ">" : ", ");
  }
}