// 2024년 7월 13일 14:52:33
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int run(int a, int b, int d, vector<int> &v) {
  if(d == v.size()) {
    return 0;
  }
  if (v[d] <= a) {
    return a - v[d] + run(v[d], b, d + 1, v);
  }
  if (v[d] >= b) {
    return v[d] - b + run(a, v[d], d + 1, v);
  }
  return min(v[d] - a + run(v[d], b, d + 1, v),
             b - v[d] + run(a, v[d], d + 1, v));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b;
  cin >> n >> a >> b;
  a--;
  b--;
  if (a > b) {
    swap(a, b);
  }
  int t;
  cin >> t;
  vector<int> v(t);
  for (int i = 0; i < t; i++) {
    cin >> v[i];
    v[i]--;
  }
  cout << run(a, b, 0, v);
}