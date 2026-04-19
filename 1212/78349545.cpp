// 2024년 5월 14일 23:52:32
// 맞았습니다!!
// 5416KB
// 16ms
#include <bitset>
#include <iostream>
using namespace std;

int main() {
  string s, r;
  cin >> s;
  if(s == "0") {
    cout << 0;
  }
  for (auto e : s) {
    e = e - '0';
    r += ((e & 4) >> 2) + '0';
    r += ((e & 2) >> 1) + '0';
    r += (e & 1) + '0';
  }
  while (r[0] == '0') {
    r = r.substr(1);
  }
  cout << r;
}