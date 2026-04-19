// 2025년 3월 19일 20:09:26
// 맞았습니다!!
// 6776KB
// 88ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, t;
  cin >> n;
  set<int> s;
  while(n--) {
    cin >> t;
    s.insert(t);
  }
  cin >> m;
  while(m--) {
    cin >> t;
    cout << (s.find(t) != s.end()) << '\n';
  }
}