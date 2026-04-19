// 2026년 3월 22일 04:38:12
// 출력 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
vector<long> v;
vector<int> p;
string A, B;
long S, L, R, al, bl, pl;
void F(int l, int r, int d) {
  if (!d) {
    for (int i = l - 1; i < r; ++i) {
      cout << A[i];
    }
    return;
  }
  long x = 0, pp = 0;
  for (int i = 0; i < bl; ++i) {
    if (r < x) break;
    if (pp != pl && i == p[pp]) {
      ++pp;
      if (x + v[d - 1] >= l) F(max((long)1, l - x), min(v[d - 1], r - x), d - 1);
      x += v[d - 1];
      continue;
    }
    if (l <= x && x < r) {
      cout << B[i];
    }
    ++x;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> A >> B >> S >> L >> R;
  al = A.size(), bl = B.size();
  for (int i = 0; i < bl; ++i) {
    if (B[i] == '$') p.push_back(i);
  }
  pl = p.size();
  v.push_back(al);
  while (v.back() <= 1e9 && v.size() <= S) {
    v.push_back(bl + pl * (v.back() - 1));
  }
  F(L, min(R, v.back()), min((long)v.size() - 1, S));
  for (int i = v.back(); i < R; ++i) cout << '-';
}
