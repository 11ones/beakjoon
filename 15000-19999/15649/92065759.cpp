// 2025년 3월 26일 20:37:37
// 맞았습니다!!
// 2020KB
// 28ms
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

void f(int d) {
  if (d == m) {
    for (auto e : v) {
      cout << e << " ";
    }
    cout << '\n';
    return;
  }
  for (int i = 1; i <= n; i++) {
    for (auto e : v) {
      if (e == i) {
        goto E;
      }
    }
    v.push_back(i);
    f(d + 1);
    v.pop_back();
  E:;
  }
}

int main() {
  cin >> n >> m;
  f(0);
}