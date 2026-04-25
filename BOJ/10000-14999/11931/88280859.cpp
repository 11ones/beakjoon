// 2025년 1월 6일 23:49:40
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
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