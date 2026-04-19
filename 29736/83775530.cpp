// 2024년 9월 11일 22:41:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, k, x;
  cin >> a >> b >> k >> x;
  if(k + x < a || k - x > b) {
    cout << "IMPOSSIBLE";
  } else {
    cout << min(b, k + x) - max(a, k - x) + 1;
  }
}