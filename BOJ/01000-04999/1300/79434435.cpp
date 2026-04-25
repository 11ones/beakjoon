// 2024년 6월 9일 23:06:30
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long l;

l n, k;

l binsrh(l s, l e) {
  l m = (s + e) / 2;
  if (s == m) {
    return m;
  }
  l cnt = 0;
  for (l i = 1; i < m; i++) {
    if(m / i == 0) {
      break;
    }
    cnt += min(m / i, n);
  }
  return cnt > k ? binsrh(s, m - 1) : binsrh(m + 1, e);
}

int main() {
  cin >> n >> k;
  cout << binsrh(1, n * n);
}