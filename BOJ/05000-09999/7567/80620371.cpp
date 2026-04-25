// 2024년 7월 6일 20:36:51
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  string s;
  int x = 5;
  cin >> s;
  char t = s[0];
  for(auto e : s) {
    if(t == e) {
      x += 5;
    } else {
      x += 10;
      t = e;
    }
  }
  cout << x;
}