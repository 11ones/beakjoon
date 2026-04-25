// 2026년 2월 23일 02:48:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, a, b, c;
  cin >> N;
  while(N--) {
    cin >> a >> b >> c;
    b -= a + c;
    cout << (b > 0 ? "advertise" : b < 0 ? "do not advertise" : "does not matter") << '\n';
  }
}