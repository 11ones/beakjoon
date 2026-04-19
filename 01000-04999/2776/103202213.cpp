// 2026년 2월 23일 05:09:39
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, x;
  cin >> T;
  while (T--) {
    cin >> N;
    map<int, int> v;
    while (N--) {
      cin >> x;
      ++v[x];
    }
    cin >> N;
    while (N--) {
      cin >> x;
      cout << v[x] << '\n';
    }
  }
}