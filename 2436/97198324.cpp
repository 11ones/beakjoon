// 2025년 8월 7일 01:17:09
// 맞았습니다!!
// 2032KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
  int a, b;
  cin >> a >> b;
  b /= a;
  for(int i = sqrt(b); i > 1; --i) {
    if(!(b % i) && gcd(b / i, i) == 1) {
      cout << a * i << " " << a * b / i;
      return 0;
    } 
  }
  cout << a << " " << a * b;
}