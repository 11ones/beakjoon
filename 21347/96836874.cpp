// 2025년 7월 28일 17:01:29
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  set<char> x;
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int a = 0, b = 0;
  while(a < s.size()) {
    int c = 0, d = 0;
    while(s[a] == s[a + 1]) ++c, ++a;
    while(t[b] == t[b + 1]) ++d, ++b;
    if(c != d) x.insert(t[b - 1]);
    ++a, ++b;
  }
  for(char e : x) cout << e;
}