// 2026년 3월 22일 06:14:32
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
vector<long> v;
vector<int> p;
string A, B, s;
long S, L, R, al, bl, pl, t;
void F(int l, int r, int d) {
  if (!d) {
    s += A.substr(l - 1, r - l + 1);
    return;
  }
  long x = 0, pp = 0;
  for (int i = 0; i < bl; ++i) {
    if (r < x) break;
    if (pp != pl && i == p[pp]) {
      ++pp;
      if (x + v[d - 1] >= l)
        F(max((long)1, l - x), min(v[d - 1], r - x), d - 1);
      x += v[d - 1];
      continue;
    }
    if (l - 1 <= x && x < r) {
      s += B[i];
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
  if (pl == 1) {
    if (L <= al) cout << A.substr(L - 1, al - L + 1), L = al + 1;
    pl = S * (bl - 1) + al;
    for (long i = L; i <= R && i <= pl; ++i) {
      cout << B[(i - al - 1) % (bl - 1) + 1];
    }
    for (long i = max(pl + 1, L); i <= R; ++i) {
      cout << '-';
    }
    return 0;
  }
  v.push_back(al);
  while (v.back() <= 1e9 && v.size() <= S) {
    v.push_back(bl + pl * (v.back() - 1));
  }
  F(L, min(R, v.back()), min((long)v.size() - 1, S));
  for (long i = v.back(); i < R; ++i) {
    s += '-';
  }
  cout << s;
}