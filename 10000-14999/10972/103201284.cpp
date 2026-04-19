// 2026년 2월 23일 02:59:19
// 맞았습니다!!
// 2180KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v(N);
  for(auto &e : v) cin >> e;
  if(!next_permutation(v.begin(), v.end())) {
    cout << "-1";
  } else {
    for(auto e : v) cout << e << " ";
  }
}