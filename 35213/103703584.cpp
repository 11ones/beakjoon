// 2026년 3월 10일 12:36:12
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v, t;
  for (int i = 1; i * i * i < 10000; ++i) {
    v.push_back(i * i * i);
  }
  for (int i = v.size() - 1; i >= 0; --i) {
    while ((N -= v[i]) > 0) {
      t.push_back(v[i]);
    }
    N += v[i];
  }
  cout << t.size() << '\n';
  for (auto e : t) cout << e << " ";
}