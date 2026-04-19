// 2024년 12월 17일 00:08:49
// 맞았습니다!!
// 14120KB
// 376ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, mx = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) {
    cin >> e;
    mx += e;
  }
  array<int, (int)1e6 + 1> a{};
  a[0] = 1;
  for (auto e : v) {
    vector<int> tv;
    for (int i = e; i <= 1e6; i++) {
      if (a[i - e]) tv.push_back(i);
    }
    for(auto f : tv) {
      a[f] = 1;
    }
  }
  mx++;
  long long sum = 0, cnt = 0;
  for (int i = 0; i <= 1e6; i++) {
    sum += (mx - i) * a[i];
    cnt += a[i];
  }
  cout << sum * 2 - cnt * (cnt + 1) / 2;
}