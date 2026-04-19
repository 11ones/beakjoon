// 2025년 10월 12일 00:04:04
// 100점
// 2028KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
typedef array<int, 26> A;

struct cmp{
  bool operator()(A a, A b) {
    for(int i = 0; i < 26; ++i) {
      if(a[i] != b[i]) return a[i] > b[i];
    }
    return 0;
  }
};

int main() {
  int N, M, K;
  string s;
  cin >> N >> M >> K;
  vector<A> v(N);
  for(auto &e : v) {
    e = {};
    cin >> s;
    for(auto f : s) ++e[f - 'A'];
  }
  sort(v.begin(), v.end(), cmp());
  A t = {};
  for(int i = 0; i < K; ++i) {
    for(int j = 0; j < 26; ++j) {
      t[j] += v[i][j];
    }
  }
  for(int i = 0; i < 26; ++i) {
    for(int j = 0; j < t[i]; ++j) {
      cout << char('A' + i);
    }
  }
}