// 2026년 3월 13일 04:18:57
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0;
  cin >> N;
  vector<int> v(1000, 1);
  while (N--) {
    int n, s, b;
    cin >> n >> s >> b;
    int a[3] = {n / 100, n / 10 % 10, n % 10};
    for (int i = 0; i < 1000; ++i) {
      int ts = 0, tb = 0;
      int t[3] = {i / 100, i / 10 % 10, i % 10};
      for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
          if (a[j] == t[k]) {
            if(j == k) ++ts;
            else ++tb;
          }
        }
      }
      if (ts != s || tb != b) v[i] = 0;
    }
  }
  for(int e : v) c += e;
  cout << c;
}