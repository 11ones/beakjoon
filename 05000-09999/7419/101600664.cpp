// 2026년 1월 4일 23:05:37
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> v;

int f(int s, int e) {
  int m = (s + e) / 2, c = 0;
  if (m == s)
    return m;
  for (auto e : v)
    c += e / m;
  if (c < K)
    return f(s, m);
  return f(m, e);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int c = 0;
  cin >> N >> K;
  for (int i = 0; i < N; ++i) {
    double t;
    cin >> t;
    v.push_back(t * 100);
    c += v[i];
  }
  if (c < K)
    c = 0;
  else
    c = f(1, 1000001);
  cout << c / 100 << '.' << c % 100 / 10 << c % 10;
}