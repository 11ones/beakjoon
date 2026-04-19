// 2025년 5월 7일 20:11:36
// 맞았습니다!!
// 2020KB
// 32ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int f = 1, b = 1, s = 1, c = 1;
  while(b != N) {
    if(s > N) s -= f++;
    else if (s < N) s += ++b;
    else {
      ++c;
      s += ++b;
    }
  }
  cout << c;
}