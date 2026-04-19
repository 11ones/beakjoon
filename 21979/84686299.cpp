// 2024년 10월 3일 15:19:24
// 맞았습니다!!
// 2024KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int btr(int &l, ll x, int p, string &s) {
  if (l == p) {
    return 1;
  }
  int cnt = 0;
  for (int i = 1; i <= l - p; i++) {
    ll t = stoll(s.substr(p, i), nullptr, 16);
    if (x <= t) {
      cnt += btr(l, t, p + i, s);
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    string s;
    cin >> s;
    int l = s.length();
    cout << btr(l, 0, 0, s) << '\n';
  }
}