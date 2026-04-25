// 2024년 8월 4일 15:45:11
// 맞았습니다!!
// 2020KB
// 92ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, s = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(x - 1 == i) {
      s = 1;
    }
  }
  if(s) {
    cout << -1;
  } else {
    cout << 1'000'003;
  }
}