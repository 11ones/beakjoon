// 2025년 5월 21일 20:18:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> v(n), d(n, 1);
  for(int& e : v) cin >> e;
  for(int i = 0; i < n; ++i) {
    int mx = 1;
    for(int j = 0; j < i; ++j) {
      if(v[j] < v[i]) mx = max(mx, d[j] + 1);
    }
    d[i] = mx;
  }
  cout << *max_element(d.begin(), d.end());
}