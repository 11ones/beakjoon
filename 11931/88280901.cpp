// 2025년 1월 6일 23:50:36
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin >> n;
  vector<int> v(n);
  while (n) {
    cin >> v[--n];
  }
  sort(&v[0], &v[n], greater<>());
  for(auto e : v) {
    cout << e << '\n';
  }
}