// 2024년 11월 23일 15:54:48
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  getline(cin, s);
  string t = "UCPC";
  auto p = t.begin();
  for(auto e : s) {
    if(e == *p) {
      p++;
    }
    if(p == t.end()) {
      cout << "I love UCPC";
      return 0;
    }
  }
  cout << "I hate UCPC";
}