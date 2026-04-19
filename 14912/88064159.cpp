// 2025년 1월 2일 04:13:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, c = 0;
  cin >> n >> d;
  for(int i = 1; i <= n; i++) {
    int t = i;
    while(t > 0) {
      if(d == t % 10) {
        c++;
      }
      t /= 10;
    }
  }
  cout << c;
}