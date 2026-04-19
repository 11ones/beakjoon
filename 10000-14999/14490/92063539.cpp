// 2025년 3월 26일 20:03:20
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(b) return gcd(b, a % b);
  return a;
}

int main() {
  int a, b;
  char c;
  cin >> a >> c >> b;
  cout << a / gcd(a, b) << ":" << b / gcd(a, b);
}