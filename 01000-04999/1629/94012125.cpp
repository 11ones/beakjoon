// 2025년 5월 7일 21:24:52
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
long A, C;

long run(long B) {
  if(B == 1) return A % C;
  long t = run(B / 2);
  t = t * t % C;
  if(B % 2) return t * A % C;
  return t;
}

int main() {
  long B;
  cin >> A >> B >> C;
  cout << run(B);
}