// 2024년 11월 15일 23:21:47
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int r;

void f(vector<int> v, int t) {
  sort(v.begin(), v.end(), greater<>());
  auto tv = v;
  for_each(tv.begin(), tv.end(), [](int &x) { x--; });
  while (!tv.back() && !tv.empty()) {
    tv.pop_back();
  }
  if (tv.empty()) {
    r = min(r, t);
    return;
  }
  f(tv, t + 1);
  if (v[0] >= 2) {
    v.push_back(v[0] / 2);
    v[0] = (v[0] + 1) / 2;
    f(v, t + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  for (int o = 1; o <= T; o++) {
    int d, x;
    vector<int> v;
    cin >> d;
    for (int i = 0; i < d; i++) {
      cin >> x;
      v.push_back(x);
    }
    r = 1e6;
    f(v, 1);
    cout << "Case #" << o << ": " << r << '\n';
  }
}