// 2024년 7월 31일 21:33:44
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  while(!cin.eof()) {
    cout << b / (a + 1) << "\n";
    cin >> a >> b;
  }
}