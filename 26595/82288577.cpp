// 2024년 8월 10일 12:26:18
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, pa, b, pb;
  cin >> n >> a >> pa >> b >> pb;
  int ta, tb, mx = 0;
  int f = n / pa, e = n / pb, d = (e - f > 0 ? 1 : -1);
  do {
    int r = (n - f * pa) / pb;
    if(mx < f * a + r * b) {
      mx = f * a + r * b;
      ta = f;
      tb = r;
    }
    f += d;
  } while(e != f);
  cout << ta << " " << tb;
}