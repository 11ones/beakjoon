// 2024년 6월 14일 23:53:49
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(auto e : s) {
    if(e >= 'A' && e <= 'Z') {
      cout << e;
    }
  }
}