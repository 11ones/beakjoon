// 2025년 4월 27일 22:49:09
// 시간 초과
// KB
// ms
#include<iostream>
int main() {
  int Q,t;
  std::cin>>Q;
  while(Q--) {
    std::cin>>t;
    std::cout<<(t==1?"업데이트한다.\n":"출력한다.\n");
  }
}