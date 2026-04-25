// 2025년 3월 25일 14:55:33
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long n, a, c = 0, t;
  cin >> n >> a;
  t = a;
  while(t <= n) {
    c += n / t;
    t *= a;
  }
  cout << c;
}