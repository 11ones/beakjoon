// 2025년 10월 11일 23:06:51
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0;
  cin >> N;
  vector<int> v(N);
  for(int &e : v) cin >> e;
  sort(v.begin(), v.end());
  N -= 2;
  for(auto e : v) {
    c += min(e, N);
    if(e >= N) {
      cout << (e == N ? c : ++c);
      return 0;
    }
    N -= e;
  }
}