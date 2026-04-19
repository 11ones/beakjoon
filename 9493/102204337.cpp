// 2026년 1월 22일 19:03:33
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, c;
  while (1) {
    cin >> a >> b >> c;
    if(a + b + c == 0) break;
    a *= 3600;
    a = (double)a / b - (double)a / c;
    b = a / 60 % 60;
    c = a % 60;
    cout << a / 3600 << ':' << (b < 10 ? "0" : "") << b << ':' << (c < 10 ? "0" : "") << c << '\n';
  }
}