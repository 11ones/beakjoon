// 2025년 4월 2일 21:11:40
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  if (n == 1) {
    cout << v[0];
  } else if (n == 2) {
    cout << v[0] + v[1] - 1;
  } else {
    sort(v.begin(), v.end(), greater<>());
    cout << v[0] + v[1] + v[2] - 3;
  }
}