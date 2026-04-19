// 2025년 3월 26일 19:41:35
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int fib(int x) {
  if(x == 0) {
    return 0;
  }
  if(x == 1) {
    return 1;
  }
  return fib(x - 1) + fib(x - 2);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  cout << fib(n);
}