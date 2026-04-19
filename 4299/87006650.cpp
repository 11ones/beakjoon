// 2024년 11월 30일 00:00:39
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(a <= b || (a + b) % 2) {
    cout << -1;
  } else {
    cout << (a + b) / 2 << " " << (a - b) / 2;
  }
}