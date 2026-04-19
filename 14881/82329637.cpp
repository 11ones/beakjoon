// 2024년 8월 11일 15:25:34
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  for(int o = 0; o < tc; o++) {
    int a, b, c;
    cin >> a >> b >> c;
    int ta = a, tb = b;
    while(tb) {
      int t = tb;
      tb = ta % tb;
      ta = t;
    }
    cout << (c % ta ? "NO\n" : "YES\n");
  }
}