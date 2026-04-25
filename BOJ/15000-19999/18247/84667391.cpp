// 2024년 10월 2일 23:39:37
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
int main() {
  int tc,n,m;
  std::cin>>tc;
  for(int o=0;o<tc;o++) {
    std::cin>>n>>m;
    std::cout<<(n>=12&&m>=4?m*11+4:-1)<<'\n';
  }
}