// 2024년 12월 14일 16:17:58
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, r;
  cin >> s;
  int l = s.length();
  for (int i = 1; i < l; i++) {
    for(int j = i + 1; j < l; j++) {
      string a = s.substr(0, i);
      string b = s.substr(i, j - i);
      string c = s.substr(j);
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
      reverse(c.begin(), c.end());
      if(r == "") {
        r = a + b + c;
      }
      if(r > a + b + c) {
        r = a + b + c;
      }
    }
  }
  cout << r;
}