// 2026년 2월 23일 02:44:53
// 100점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, K, a, b, c = 0;
  cin >> N >> K;
  vector<int> v(12);
  while(N--) {
    cin >> a >> b;
    ++v[a * 6 + b - 1];
  }
  for(auto e : v) c += (e + K - 1) / K;
  cout << c;
}