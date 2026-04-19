// 2026년 2월 23일 05:05:56
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  cin >> N;
  vector<int> v;
  for(int i = 0; i < N; ++i) {
    cin >> x;
    v.insert(v.end() - x, i + 1);
  }
  for (auto e : v) cout << e << " ";
}