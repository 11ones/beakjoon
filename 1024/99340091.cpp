// 2025년 10월 11일 23:48:35
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  for (int i = L; i <= 100; ++i) {
    if (i % 2 && !(N % i) && N / i >= i / 2) {
      for(int j = 0; j < i; ++j) {
        cout << N / i - i / 2 + j << " ";
      }
      return 0;
    }
    if (!(i % 2) && !(N % (i / 2)) && N / (i / 2) % 2 && N / (i / 2) / 2 + 1 >= i / 2) {
      for(int j = 0; j < i; ++j) {
        cout << N / (i / 2) / 2 + 1 - i / 2 + j << " ";
      }
      return 0;
    }
  }
  cout << -1;
}