// 2026년 1월 4일 22:23:38
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N;
  cin >> N;
  vector<int> v(N), u(N);
  for (int &e : v) cin >> e;
  for (int &e : u) cin >> e;
  sort(v.begin(), v.end());
  sort(u.begin(), u.end());
  for (int i = 0; i <= N / 2; ++i) {
    if (v[i] > u[i + N / 2]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}