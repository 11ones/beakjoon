// 2026년 3월 1일 21:19:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v= {0, 0, 0, 1, 1, 2};
  for (int i = 4; i < 22; ++i) {
    v.push_back(v[i + 1] + v[i] + v[i - 1] + (i % 2 ? 0 : v[i - 2]));
  }
  int N;
  cin >> N;
  cout << v[N + 2] + v[N + 1] + v[N] + (N % 2 ? v[N - 1] : 0);
}