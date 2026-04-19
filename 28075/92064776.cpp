// 2025년 3월 26일 20:22:15
// 맞았습니다!!
// 2020KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int n, m, c = 0, p = 0, l = 0;
vector<int> t;
array<int, 6> a;

void f() {
  if(l == n) {
    if(p >= m) c++;
    return;
  }
  for (int i = 0; i < 6; i++) {
    if(l > 0 && t[l - 1] % 3 == i % 3) {
      p += a[i] / 2;
    } else {
      p += a[i];
    }
    t.push_back(i);
    l++;
    f();
    l--;
    t.pop_back();
    if(l > 0 && t[l - 1] % 3 == i % 3) {
      p -= a[i] / 2;
    } else {
      p -= a[i];
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int &e : a) {
    cin >> e;
  }
  f();
  cout << c;
}