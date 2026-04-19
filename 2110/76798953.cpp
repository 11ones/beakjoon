// 2024년 4월 11일 23:29:15
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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 1; i < n; i++) {
    auto t = v.begin() + i;
    int d = *t - v.front();
    for (int j = 2; j < c; j++) {
      t = lower_bound(t, v.end(), *t + d);
      if (t >= v.end() - 1) {
        cout << i;
        return 0;
      }
    }
  }
}