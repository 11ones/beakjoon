// 2024년 5월 30일 23:59:55
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = 0, l = s.size();
  for(int i = 1; i < l; i++) {
    if(s[i] != s[i - 1]) {
      n++;
    }
  }
  cout << (n ? (n + 1) / 2 : 0);
}