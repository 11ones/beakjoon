// 2024년 11월 20일 21:39:19
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  a += b;
  if (c * 2 >= a) {
    cout << c * 2 - a;
  } else {
    cout << a;
  }
}