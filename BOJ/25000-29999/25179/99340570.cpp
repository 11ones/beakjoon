// 2025년 10월 12일 00:08:31
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, M;
  cin >> N >> M;
  cout << (N % (M + 1) != 1 ? "Can win" : "Can't win");
}