// 2024년 9월 25일 23:18:30
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<long long> v{1};
  for(int i = 1; i <= n; i++) {
    long long t = 0;
    for(int j = 0; j < i; j++) {
      t += v[j] * v[i - j - 1];
    }
    v.push_back(t);
  }
  cout << v[n];
}