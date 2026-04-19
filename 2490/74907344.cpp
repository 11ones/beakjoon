// 2024년 3월 13일 17:15:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

char a[5] = {'D','C','B','A','E'};

int main() {
  for(int o = 0; o < 3; o++) {
    int c = 0;
    for(int i = 0; i < 4; i++) {
      int x;
      std::cin >> x;   
      if(x) c++;
    }
    std::cout << a[c] << '\n';
  }
}