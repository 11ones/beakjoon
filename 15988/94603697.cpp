// 2025년 5월 21일 20:01:17
// 맞았습니다!!
// 8292KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  const long M = 1'000'000'009;
  int T;
  cin >> T;
  vector<int> v {0, 1, 2, 4};
  for(int i = 4; i <= 1'000'000; ++i) {
    v.push_back((v[i - 1] % M + v[i - 2] % M + v[i - 3] % M) % M);
  }
  while(T--) {
    int n;
    cin >> n;

    cout << v[n] << '\n';
  }
}