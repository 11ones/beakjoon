// 2024년 11월 23일 15:53:56
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
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