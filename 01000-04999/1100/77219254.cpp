// 2024년 4월 19일 23:56:15
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int cnt = 0;
  char c;
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      cin >> c;
      if((i + j + 1) % 2 && c == 'F') {
        cnt++;
      }
    }
  }
  cout << cnt;
}