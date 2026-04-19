// 2024년 10월 24일 22:33:48
// 맞았습니다!!
// 5220KB
// 32ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  l n, m, c = 0, x;
  cin >> n >> m;
  priority_queue<l> q;
  for(int i = 0; i < n; i++) {
    cin >> x;
    c += x;
    q.push(x);
    while(c >= m) {
      c -= q.top() * 2;
      q.pop();
    }
  }
  cout << n - q.size();
}