// 2024년 11월 15일 23:44:41
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int r;

void f(vector<int> v, int t) {
  if (t >= r) {
    return;
  }
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
  for (int i = 1; i <= tv[0] / 2; i++) {
    tv = v;
    tv.push_back(i);
    tv[0] = tv[0] - i;
    f(tv, t + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  for (int o = 1; o <= T; o++) {
    int d, x, m = 0;
    vector<int> v;
    cin >> d;
    for (int i = 0; i < d; i++) {
      cin >> x;
      m = max(m, x);
    }
    v.push_back(m);
    r = 1e6;
    f(v, 1);
    cout << "Case #" << o << ": " << r << '\n';
  }
}