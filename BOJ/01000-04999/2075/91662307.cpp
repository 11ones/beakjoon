// 2025년 3월 19일 20:32:19
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  set<int> s;
  int n, t;
  cin >> n;
  for(int i = 0; i < n * n; i++) {
    cin >> t;
    s.insert(t);
  }
  cout << *prev(s.end(), 5);
}