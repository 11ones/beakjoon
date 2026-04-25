// 2025년 10월 11일 23:14:49
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, t, c = 0;
  cin >> N;
  t = N - 2;
  vector<int> v(N);
  for(int &e : v) cin >> e;
  sort(v.begin(), v.end());
  for(auto e : v) {
    c += min(e, t);
    if(e >= t) {
      cout << (N == 2 ? 1 : c);
      return 0;
    }
    t -= e;
  }
}