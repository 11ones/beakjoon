// 2025년 9월 15일 15:46:00
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  cout << (M - 3 + K + 100000 / N * N + N - 1) % N + 1;
}