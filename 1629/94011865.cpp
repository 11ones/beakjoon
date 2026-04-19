// 2025년 5월 7일 21:20:07
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

long run(long A, long B, long C) {
  if(B == 1) return A;
  long t = run(A, B / 2, C);
  if(B % 2) return t * run(A, B / 2 + 1, C) % C;
  return t * t % C;
}

int main() {
  long A, B, C;
  cin >> A >> B >> C;
  cout << run(A, B, C);
}