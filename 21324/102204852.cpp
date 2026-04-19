// 2026년 1월 22일 19:18:01
// 맞았습니다!!
// 2020KB
// 20ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  N/=2;
  while(N--) {
    double a, b;
    cin >> a >> b;
    cout << (char)((int)(a / 22.5) * 16 + b / 22.5);
  }
}