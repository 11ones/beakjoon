// 2024년 3월 18일 23:32:26
// 맞았습니다!!
// 2412KB
// 12ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<>());
  int mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, v[i] * (i + 1));
  }
  cout << mx;
}