// 2026년 3월 1일 21:17:16
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<int> v= {0, 0, 0, 1, 1, 2};
  for (int i = 4; i < 22; ++i) {
    v.push_back(v[i + 1] + v[i] + v[i - 1] + (i % 2 ? v[i - 2] : 0));
  }
  int N;
  cin >> N;
  cout << v[N + 2] + v[N + 1] + v[N] + (N % 2 ? v[N - 1] : 0);
}