// 2024년 10월 9일 12:22:50
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int g[6] = {-5, -3, -1, 2, 4, 6};
  string s;
  while (cin >> s) {
    if (s == "#") {
      return 0;
    }
    bool chk2 = 1;
    for (int i = 1; i < s.length(); i++) {
      bool chk = 1;
      for (auto e : g) {
        if (s[i] - s[i - 1] == e) {
          chk = 0;
          break;
        }
      }
      if (chk) {
        chk2 = 0;
        break;
      }
    }
    cout << (chk2 ? "That music is beautiful.\n" : "Ouch! That hurts my ears.\n");
  }
}