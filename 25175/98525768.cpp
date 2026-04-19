// 2025년 9월 15일 15:44:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  cout << (M - 3 + K + 100000 / N * N + N) % N;
}