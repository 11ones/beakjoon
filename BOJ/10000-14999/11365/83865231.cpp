// 2024년 9월 13일 23:23:14
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
  string s;
  getline(cin, s);
  if(s == "END")
    return 0;
    reverse(s.begin(), s.end());
    cout << s << "\n";
  }
}