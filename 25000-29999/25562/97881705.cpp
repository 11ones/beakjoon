// 2025년 8월 27일 16:38:45
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x = 1;
  cin >> N;
  cout << N * (N - 1) / 2 << "\n";
  for(int i = 0; i < N; ++i) {
    cout << x << " ";
    x *= 2;
  }
  cout << "\n" << N - 1 << "\n";
  for(int i = 1; i <= N; ++i) {
    cout << i << " ";
  }
}