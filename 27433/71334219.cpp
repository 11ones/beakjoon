// 2024년 1월 7일 22:32:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

typedef unsigned long long u;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  u ans = 1;
  for(int i = 2; i <= n; i++) {
    ans *= i;
  }
  cout << ans;
}