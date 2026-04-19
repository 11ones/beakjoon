// 2024년 6월 2일 15:38:10
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, c;
vector<int> v;

int binsrh(int s, int e) {
  int m = (e + s) / 2;
  if (m == s) {
    return m;
  }
  auto t = v.begin();
  for (int j = 1; j < c; j++) {
    t = lower_bound(t, v.end(), *t + m);
    if (t >= v.end()) {
      return binsrh(s, m - 1);
    }
  }
  return binsrh(m, e);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  cout << binsrh(1, v.back());
}