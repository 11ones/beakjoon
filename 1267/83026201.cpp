// 2024년 8월 26일 23:39:40
// 컴파일 에러
// KB
// ms
include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int y = 0, m = 0;
  for (auto e : v) {
    y += (e / 30 + 1) * 10;
    m += (e / 60 + 1) * 15;
  }
  if (y < m) {
    cout << "Y " << y;
  } else if (y == m) {
    cout << "Y M " << y;
  } else {
    cout << "M " << m;
  }
}