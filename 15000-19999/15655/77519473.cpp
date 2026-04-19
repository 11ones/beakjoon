// 2024년 4월 27일 07:30:48
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int m, n;
vector<int> v;
vector<int> t;

void f(int x) {
  if (t.size() == m) {
    for(auto e : t) {
      cout << e << " ";
    }
    cout << '\n';
  }
  for (int i = x; i < n; i++) {
    t.push_back(v[i]);
    f(i + 1);
    t.pop_back();
  }
}

int main() {
  int x;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  f(0);
}