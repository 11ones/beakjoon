// 2026년 2월 23일 02:54:42
// 100점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;


int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0, a, b;
  cin >> N;
  while(N--) {
    cin >> a >> b;
    c += b % a;
  }
  cout << c;
}