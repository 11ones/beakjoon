// 2025년 5월 21일 20:21:18
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

map<long, long> m;
long N, P, Q;

long run(long t) {
  long p = t / P, q = t / Q;
  return m[t] = (m[p] ? m[p] : run(p)) + (m[q] ? m[q] : run(q));
}

int main() {
  m[0] = 1;
  cin >> N >> P >> Q;
  cout << (N ? run(N) : 1);
}