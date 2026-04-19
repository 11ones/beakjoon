// 2024년 12월 11일 00:04:00
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<pair<int, int>, 8> a;
  for(int i = 0; i < 8; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  sort(a.begin(), a.end(), greater<pair<int, int>>());
  int s = 0;
  vector<int> v;
  for(int i = 0; i < 5; i++) {
    s += a[i].first;
    v.push_back(a[i].second);
  }
  cout << s << '\n';
  sort(v.begin(), v.end());
  for(auto e : v) {
    cout << e << " ";
  }
}