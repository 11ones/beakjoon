// 2024년 8월 10일 13:29:47
// 맞았습니다!!
// 2020KB
// 112ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, pa, b, pb;
  cin >> n >> a >> pa >> b >> pb;
  long long ta, tb, mx = 0;
  int f = 0, e = n / pa, d = (e - f > 0 ? 1 : -1);
  if(f == e) {
    cout << "0 " << n / pb;
    return 0;
  }
  while(f <= e) {
    long long r = (n - f * pa) / pb;
    if(mx < f * a + r * b) {
      mx = f * a + r * b;
      ta = f;
      tb = r;
    }
    f += d;
  }
  cout << ta << " " << tb;
}