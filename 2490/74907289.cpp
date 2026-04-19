// 2024년 3월 13일 17:14:53
// 틀렸습니다
// KB
// ms
#include <iostream>

char a[5] = {'E','A','B','C','D'};

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