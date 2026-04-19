// 2024년 9월 3일 20:33:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c = 0, s = 0, x;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(x == 1) {
      s += ++c;
    } else {
      c = 0;
    }
  }
  cout << s;
}