// 2026년 2월 23일 05:53:03
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  int v[10001] = {0, 1, };
  for(int i = 2; i <= 10000; ++i) {
    v[i] = v[i - 1] + v[i - 2];
  }
  cin >> x;
  cout << v[x];
}