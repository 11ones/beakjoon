// 2024년 12월 22일 17:40:05
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long c = 0, n;
  cin >> n;
  for(int i = 1; i * i <= n; i++) {
    c += n / i - i + 1;
  }
  cout << c;
}