// 2024년 4월 25일 23:42:35
// 맞았습니다!!
// 2020KB
// 12ms
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;
vector<int> t;
int mx = 0;

void f() {
  if (t.size() == n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
      sum += abs(v[t[i]] - v[t[i - 1]]);
    }
    mx = max(mx, sum);
  }
  for (int i = 0; i < n; i++) {
    bool chk = 0;
    for (auto e : t) {
      if (e == i) {
        chk = 1;
        break;
      }
    }
    if (chk) {
      continue;
    }
    t.push_back(i);
    f();
    t.pop_back();
  }
}

int main() {
  int x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  f();
  cout << mx;
}