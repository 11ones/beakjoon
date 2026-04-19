// 2025년 10월 30일 16:05:53
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long A, B, c = 0;
  cin >> A >> B;
  --A;
  for (int i = 62; i >= 0; --i) {
    if (B < (1L << i)) continue;
    for (int j = i; j >= 0; --j) {
      long t = 1L << j;
      if (B & t) c += B % (t * 2) - t + 1 + (B - t) / t * t / 2;
      else c += B / t * t / 2;
    }
    break;
  }
  for (int i = 62; i >= 0; --i) {
    if (A < (1L << i)) continue;
    for (int j = i; j >= 0; --j) {
      long t = 1L << j;
      if (A & t) c -= A % (t * 2) - t + 1 + (A - t) / t * t / 2;
      else c -= A / t * t / 2;
    }
    break;
  }
  cout << c;
}