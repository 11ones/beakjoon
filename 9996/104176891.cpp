// 2026년 3월 22일 06:01:18
// 맞았습니다!!
// 2024KB
// 0ms
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
    cout << (l - 1 <= s.size() && S.substr(0, p) == s.substr(0, p) && S.substr(p + 1, l - p) == s.substr(s.size() - l + p + 1, l - p) ? "DA\n" : "NE\n");
  }
}