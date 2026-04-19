// 2024년 5월 8일 23:02:20
// 맞았습니다!!
// 2024KB
// 692ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v, t;

void f() {
  for (int i = 0; i < n; i++) {
    t.push_back(v[i]);
    if (t.size() >= m) {
      for (auto e : t) {
        cout << e << " ";
      }
      cout << '\n';
    } else {
      f();
    }
    t.pop_back();
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  f();
}