// 2024년 6월 9일 22:58:04
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, k;

int binsrh(int s, int e) {
  int m = (s + e) / 2;
  if (s == m) {
    return m;
  }
  int cnt = 0;
  for (int i = 1; i < m; i++) {
    cnt += min(m % i, n);
  }
  if (cnt > k) {
    return binsrh(s, m - 1);
  } else if (cnt < k) {
    return binsrh(m + 1, e);
  }
  return -1;
}

int main() {
  cin >> n >> k;
  cout << binsrh(1, n * n);
}