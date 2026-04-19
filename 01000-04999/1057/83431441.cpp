// 2024년 9월 4일 20:05:33
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, a, b;
  cin >> n >> a >> b;
  for(int i = 1;;i++) {
    if((a + 1) / 2 == (b + 1) / 2) {
      cout << i;
      return 0;
    }
    a = (a + 1) / 2;
    b = (b + 1) / 2;
  }
}