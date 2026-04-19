// 2026년 3월 22일 04:41:54
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
vector<long> v;
vector<int> p;
string A, B, s;
long S, L, R, al, bl, pl;
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
    if (l <= x && x < r) {
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
  v.push_back(al);
  while (v.back() <= 1e9 && v.size() <= S) {
    v.push_back(bl + pl * (v.back() - 1));
  }
  F(L, min(R, v.back()), min((long)v.size() - 1, S));
  for (int i = v.back(); i < R; ++i) s += '-';
  cout << s;
}