// 2025년 1월 5일 19:51:15
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  const int N = 2048, M = 32;

  vector<bool> r(M), S(N + M);
  char c;
  for(int i = 0; i < M; i++) {
    cin >> c;
    c -= '0';
    r[i] = c;
  }
  for(int i = 0; i < M; i++) {
    cin >> c;
    c -= '0';
    r[i] = c == r[i];
  }
  cin >> c;
  for(int i = 0; i < N; i++) {
    cin >> c;
    c -= '0';
    S[i] = c;
    if(i < M) {
      S[i + N] = c;
    }
  }
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      if(r[j] != (S[i + j] == S[i + j + M])) {
        goto E;
      }
    }
    cout << i;
    return 0;
    E:;
  }
}