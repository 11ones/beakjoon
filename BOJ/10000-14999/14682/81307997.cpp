// 2024년 7월 19일 22:25:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long s = n;
  for(int i = 0; i < k; i++) {
    n *= 10;
    s += n;
  }
  cout << s;
}