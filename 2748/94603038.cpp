// 2025년 5월 21일 19:44:49
// 런타임 에러 (AssertionFailed)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;
  vector<long> v{0, 1};
  for (int i = 2; i <= n; ++i) {
    v[i] = v[i - 1] + v[i - 2];
  }
  cout << v[n];
}