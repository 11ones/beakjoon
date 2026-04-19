// 2025년 9월 21일 21:49:29
// 맞았습니다!!
// 3592KB
// 116ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long W, H, K, N, M, c = 0;
  cin >> W >> H >> K >> N;
  vector<long> R(N + 2);
  for(int i = 1; i <= N; ++i) {
    cin >> R[i];
  }
  R[N + 1] = H;
  cin >> M;
  vector<long> C(M + 2);
  for(int i = 1; i <= M; ++i) {
    cin >> C[i];
  }
  C[M + 1] = W;
  for (int i = 1; i < N + 2; ++i) {
    R[i - 1] = R[i] - R[i - 1];
  }
  for (int i = 1; i < M + 2; ++i) {
    C[i - 1] = C[i] - C[i - 1];
  }
  R.pop_back(), C.pop_back();
  sort(C.begin(), C.end());
  for(int i = 0; i <= N; ++i) {
    c += upper_bound(C.begin(), C.end(), K / R[i]) - C.begin();
  }
  cout << c;
}