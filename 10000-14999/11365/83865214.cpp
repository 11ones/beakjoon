// 2024년 9월 13일 23:22:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
  string s;
  getline(cin, s);
  if(s == "END")
    return 0;
    reverse(s.begin(), s.end());
    cout << s;
  }
}