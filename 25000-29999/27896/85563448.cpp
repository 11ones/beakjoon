// 2024년 10월 24일 00:08:44
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  l n, m, c = 0;
  cin >> n >> m;
  vector<l> v(n);
  priority_queue<l> q;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (l e : v) {
    c += e;
    q.push(e);
    while(c > m) {
      c -= q.top() * 2;
      q.pop();
    }
  }
  cout << n - q.size();
}