// 2025년 9월 9일 17:44:24
// 맞았습니다!!
// 2020KB
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
    t.push_back(i);
    if(run(m * i)) {
      return 1;
    }
    t.pop_back();
  }
  return 0;
}

int main() {
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