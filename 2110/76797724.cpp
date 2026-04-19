// 2024년 4월 11일 23:08:31
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c;
  cin >> n >> c;
  vector<int> v(n), tv;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  tv.push_back(v.front());
  auto t = v.begin();
  int d;
  int mn = 1'000'000'000;
  for (int i = 1; i < c - 1; i++) {
    d = *t + (v.back() - *t) / (c - i);
    t = upper_bound(t, v.end(), d);
    if(*t - d > d - *(t - 1) && *(t - 1) != tv.back()) {
      t--;
    }
    mn = min(mn, *t - tv.back());
    tv.push_back(*t);
  }
  mn = min(mn, v.back() - *t);
  cout << mn;
}