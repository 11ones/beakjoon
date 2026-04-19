// 2026년 4월 13일 15:22:07
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int J, N, c = 0, t;
  cin >> J >> N;
  cin.ignore(100, '\n');
  while (N--) {
    string s;
    getline(cin, s);
    t = 0;
    for (auto e : s) {
      if (e >= 'A' && e <= 'Z') t += 4;
      else if (e == ' ') t += 1;
      else t += 2;
    }
    if (t <= J) ++c;
  }
  cout << c;
}