// 2025년 9월 2일 13:25:46
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, K;
  cin >> N >> K;
  list<int> a, b;
  for(int i = 1; i <= N; ++i) {
    a.push_back(i);
  }
  for (int i = 0; i < K; ++i) {
    int A, B, C;
    cin >> A >> B >> C;
    auto c = a.begin();
    for(int j = 0; j < A - 1; ++j) {
      ++c;
    }
    auto cn = c;
    ++cn;
    for(int j = 0; j <= B - A; ++j) {
      b.push_back(*c);
      a.erase(c);
      c = cn;
      ++cn;
    }
    auto p = a.begin();
    for(int j = 0; j < C; ++j) {
      ++p;
    }
    a.insert(p, b.begin(), b.end());
    b.clear();
  }
  auto p = a.begin();
  for(int i = 0; i < 10; ++i) {
    cout << *(p++) << "\n";
  }
}