// 2024년 11월 11일 22:53:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a + b + c >= 100) {
    cout << "OK";
  } else if(a < b && a < c) {
    cout << "Soongsil";
  } else if(b < c && b < a) {
    cout << "Korea";
  } else {
    cout << "Hanyang";
  }
}