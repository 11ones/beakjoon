// 2025년 3월 12일 19:52:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

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