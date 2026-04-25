// 2025년 5월 21일 20:00:27
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  const long M = 1'000'000'009;
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    vector<int> v {0, 1, 2, 4};
    for(int i = 4; i <= n; ++i) {
      v.push_back((v[i - 1] % M + v[i - 2] % M + v[i - 3] % M) % M);
    }
    cout << v[n] << '\n';
  }
}