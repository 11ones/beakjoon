// 2024년 7월 4일 23:38:40
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
#define MOD 12'345'678'910
using namespace std;

int n;

pair<long long, int> run(vector<int> &v, int s, int d) {
  if (v[s + 1]) {
    return {1, s + 2};
  }
  long long t = 0;
  for (; s < n + 2; s++) {
    if (v[s] && !d) {
      return {t * 2, s + 1};
    }
    if (!v[s]) {
      auto p = run(v, s + 1, d + 1);
      t = (t + p.first) % MOD;
      s = p.second - 1;
    }
  }
  return {t, s};
}

int main() {
  cin >> n;
  vector<int> v = {0};
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  v.push_back(1);
  cout << run(v, 0, -1).first;
}