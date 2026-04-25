// 2024년 12월 18일 22:23:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> v(n);
  for (auto &e : v) {
    cin >> e;
  }
  sort(v.begin(), v.end());
  for (auto e : v) {
    if (l < e) break;
    l++;
  }
  cout << l;
}