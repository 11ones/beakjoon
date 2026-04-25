// 2024년 7월 29일 23:58:33
// 런타임 에러 (out_of_range)
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  string a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << stoi(a + b) + stoi(b + d);
}