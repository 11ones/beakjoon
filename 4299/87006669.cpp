// 2024년 11월 30일 00:01:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(a < b || (a + b) % 2) {
    cout << -1;
  } else {
    cout << (a + b) / 2 << " " << (a - b) / 2;
  }
}