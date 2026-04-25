// 2026년 3월 16일 15:16:16
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T;
  cin >> T;
  while (T--) {
    string s, s1, s2;
    cin >> s;
    if (s.size() % 2) s += s;
    for (int i = 0; i < s.size(); i += 2) s1 += s[i], s2 += s[i + 1];
    cout << s1 << '\n' << s2 << '\n';
  }
}