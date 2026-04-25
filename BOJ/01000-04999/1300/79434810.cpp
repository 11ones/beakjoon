// 2024년 6월 9일 23:14:17
// 맞았습니다!!
// 2020KB
// 36ms
#include <iostream>
using namespace std;
typedef long long l;

l n, k;

l binsrh(l s, l e) {
  l m = (s + e) / 2;
  if (s > e) {
    return s;
  }
  l cnt = 0;
  for (l i = 1; i <= n; i++) {
    cnt += min(m / i, n);
  }
  return cnt >= k ? binsrh(s, m - 1) : binsrh(m + 1, e);
}

int main() {
  cin >> n >> k;
  cout << binsrh(1, n * n);
}