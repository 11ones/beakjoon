// 2024년 4월 4일 23:50:24
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *d = new int[n + 1]{};
  for(int i = 1; i * i <= n; i++) {
    d[i * i ] = 1;
  }
  for(int i = 1; i <= n; i++) {
    if(d[i] != 0) {
      continue;
    }
    int mn = 100'000;
    for(int j = 1; j < i; j++) {
      mn = min(mn, d[j] + d[i - j]);
    }
    d[i] = mn;
  }
  cout << d[n];
}