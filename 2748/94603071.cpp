// 2025년 5월 21일 19:45:30
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;
  vector<long> v{0, 1};
  for (int i = 2; i <= n; ++i) {
    v.push_back(v[i - 1] + v[i - 2]);
  }
  cout << v[n];
}