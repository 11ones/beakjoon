// 2024년 9월 6일 00:22:35
// 맞았습니다!!
// 2412KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for(auto e : v) {
    cout << e << " ";
  }
}