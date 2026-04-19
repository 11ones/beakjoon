// 2025년 9월 9일 17:43:26
// 맞았습니다!!
// 2208KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int N, x, a = 1;
vector<int> t;

bool run(int m) {
  if(t.size() == N) {
    if(a < m) return 1;
    return 0;
  }
  for(int i = 1; i <= 9; ++i) {
    if(a >= m * pow(9, N - t.size())) return 0;
    t.push_back(i);
    if(run(m * i)) {
      return 1;
    }
    t.pop_back();
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N;
  for(int i = 0; i < N; ++i) {
    cin >> x;
    a *= x;
  }
  run(1);
  if(t.empty()) {
    cout << -1;
    return 0;
  }
  for(int e : t) {
    cout << e << " ";
  }
}