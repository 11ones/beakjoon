// 2024년 9월 26일 23:12:05
// 맞았습니다!!
// 2020KB
// 4052ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for (int o = 1; o <= tc; o++) {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i < b; i++) {
      string s = to_string(i);
      int l = s.length();
      s += s;
      for (int j = 1; j < l; j++) {
        int t = stoi(s.substr(j, l));
        if(t == i) {
          break;
        }
        if(t > i && t <= b) {
          cnt++;
        }
      }
    }
    cout << "Case #" << o << ": " << cnt << '\n';
  }
}