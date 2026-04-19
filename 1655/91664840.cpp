// 2025년 3월 19일 21:10:14
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  set<int> s;
  for(int i = 0; i < n; i++) {
    cin >> t;
    s.insert(t);
    cout << *next(s.begin(), i / 2) << '\n';
  }
}