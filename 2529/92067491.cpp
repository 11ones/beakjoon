// 2025년 3월 26일 21:03:53
// 맞았습니다!!
// 2020KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

long n, mx = 0, mn = 1e11;
char c;
string s;
vector<char> t;

void f() {
  int l = s.size();
  if (l == n + 1) {
    mx = max(mx, stol(s));
    mn = min(mn, stol(s));
    return;
  }
  for (int i = 0; i <= 9; i++) {
    for (auto e : s) {
      if (e == i + '0') goto E;
    }
    if (l) {
      if (t[l - 1] == '>' && s[l - 1] <= i + '0' || t[l - 1] == '<' && s[l - 1] >= i + '0') {
        goto E;
      }
    }
    s += (i + '0');
    f();
    s.pop_back();
  E:;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> c;
    t.push_back(c);
  }
  f();
  cout << mx << "\n" << setw(n + 1) << setfill('0') << mn;
}