// 2024년 10월 16일 23:31:40
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int l = s.length();
  for (int i = 1; i <= l; i++) {
    if (!(l % i)) {
      bool chk = 1;
      string r = s.substr(0, i), t;
      for (int j = i; j < l; j += i) {
        r = r.back() + r;
        r.pop_back();
        t = s.substr(j, i);
        if(r != t) {
          chk = 0;
          break;
        }
      }
      if(chk) {
        cout << i;
        return 0;
      }
    }
  }
}