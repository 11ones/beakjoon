// 2024년 4월 25일 23:32:14
// 틀렸습니다
// KB
// ms
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
      sum += abs(t[i] - t[i - 1]);
    }
    mx = max(mx, sum);
  }
  for (auto e : v) {
    bool chk = 0;
    for (auto ee : t) {
      if (e == ee) {
        chk = 1;
        break;
      }
    }
    if (chk) {
      continue;
    }
    t.push_back(e);
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