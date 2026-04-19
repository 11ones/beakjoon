// 2024년 11월 7일 21:35:24
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, y;
  for(int i = 0; i < 3; i++) {
    cin >> a >> b >> c;
    x = 3600 * a + 60 * b + c;
    cin >> a >> b >> c;
    y = 3600 * a + 60 * b + c;
    a = (y - x) / 3600;
    b = (y - x) / 60;
    c = (y - x) % 60;
    cout << a << " " << b << " " << c << "\n";
  }
}