// 2024년 8월 10일 13:22:48
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, pa, b, pb;
  cin >> n >> a >> pa >> b >> pb;
  int ta, tb, mx = 0;
  int f = 0, e = n / pa, d = (e - f > 0 ? 1 : -1);
  while(f <= e) {
    int r = (n - f * pa) / pb;
    if(mx < f * a + r * b) {
      mx = f * a + r * b;
      ta = f;
      tb = r;
    }
    f += d;
  }
  cout << ta << " " << tb;
}