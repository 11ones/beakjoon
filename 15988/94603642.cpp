// 2025년 5월 21일 19:59:48
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
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