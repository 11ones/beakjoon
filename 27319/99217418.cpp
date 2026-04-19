// 2025년 10월 7일 11:26:34
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, a, b;
  cin >> N;
  vector<int> c(2);
  vector<array<int, 2>> v(N);
  for (auto &e : v) cin >> e[0] >> e[1];
  for (int i = 0; i < N; ++i) {
    int d1 = (i + 1) % N;
    int d2 = (i + 2) % N;
    array<long, 2> t1 = {v[d1][0] - v[i][0], v[d1][1] - v[i][1]};
    array<long, 2> t2 = {v[d2][0] - v[d1][0], v[d2][1] - v[d1][1]};
    if (t1[1] * t2[0] - t1[0] * t2[1] > 0) {
      a = d1;
      ++c[0];
    } else {
      b = d1;
      ++c[1];
    }
  }
  if (c[0] == 1 || c[1] == 1) {
    if (c[1] == 1) {
      a = b;
    }
    b = (a + N / 2) % N;
    long dy = v[a][0] - v[b][0];
    long dx = v[a][1] - v[b][1];
    for (int i = 1; i < N / 2; ++i) {
      int ta = (a + i) % N;
      int tb = (a + N - i) % N;
      long ty = v[ta][0] - v[tb][0];
      long tx = v[ta][1] - v[tb][1];
      if (dy * tx != -dx * ty) {
        cout << 0;
        return 0;
      }
    }
    cout << 1;
  } else {
    cout << 0;
  }
}