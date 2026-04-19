// 2024년 11월 20일 21:48:14
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  a += b;
  if (c * 2 <= a) {
    cout << a - c * 2;
  } else {
    cout << a;
  }
}