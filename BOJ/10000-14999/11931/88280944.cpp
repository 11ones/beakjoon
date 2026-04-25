// 2025년 1월 6일 23:51:37
// 맞았습니다!!
// 5928KB
// 252ms
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
  sort(&v[0], &v[n], greater<>());
  for(auto e : v) {
    cout << e << '\n';
  }
}