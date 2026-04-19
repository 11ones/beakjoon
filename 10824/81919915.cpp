// 2024년 8월 1일 23:18:31
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  string a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << stoll(a + b) + stoll(b + d);
}