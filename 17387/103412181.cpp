// 2026년 3월 1일 22:00:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

long ccw(array<long, 2> A, array<long, 2> B, array<long, 2> X) {
  long x = A[0] * B[1] + B[0] * X[1] + X[0] * A[1] - A[1] * B[0] - B[1] * X[0] - X[1] * A[0];
  return x ? x / abs(x) : 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  array<long, 2> A, B, X, Y;
  cin >> A[0] >> A[1]>> B[0] >> B[1]>> X[0] >> X[1]>> Y[0] >> Y[1];
  if (A > B) swap(A, B);
  if (X > Y) swap(X, Y);
  long x = ccw(A, B, X) * ccw(A, B, Y), y = ccw(X, Y, A) * ccw(X, Y, B);
  cout << (x <= 0 && y <= 0 && !(x == 0 && y == 0 && (B < X || Y < A))) ? 1 : 0;
}