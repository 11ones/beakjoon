// 2024년 10월 24일 00:05:38
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, m, c = 0;
  cin >> n >> m;
  vector<int> v(n);
  priority_queue<int> q;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (auto e : v) {
    c += e;
    q.push(e);
    while(c > m) {
      c -= q.top() * 2;
      q.pop();
    }
  }
  cout << n - q.size();
}