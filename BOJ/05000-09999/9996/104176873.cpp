// 2026년 3월 22일 05:55:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, p, l;
  string S, s;
  cin >> N >> S;
  l = S.size();
  for (int i = 0; i < l; ++i) {
    if(S[i] == '*') p = i;
  }
  while (N--) {
    cin >> s;
    cout << (l <= s.size() && S.substr(0, p) == s.substr(0, p) && S.substr(p + 1, l - p) == s.substr(s.size() - p, l - p) ? "DA\n" : "NE\n");
  }
}