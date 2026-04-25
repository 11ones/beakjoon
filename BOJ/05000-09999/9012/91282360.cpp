// 2025년 3월 12일 19:52:58
// 맞았습니다!!
// 2024KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n;
  while (n--) {
    t = 0;
    string s;
    cin >> s;
    for (auto e : s) {
      if (e == '(')
        t++;
      else
        t--;
      if(t < 0) {
        cout << "NO\n";
        goto E;
      }
    }
    cout << (t ? "NO\n" : "YES\n");
    E:;
  }
}