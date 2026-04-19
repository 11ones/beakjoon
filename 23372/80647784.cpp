// 2024년 7월 7일 15:05:38
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(k), c;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < k; i++) {
    cin >> b[i];
  }
  double t = 0;
  for (int i = 0; i < n; i++) {
    t = t - (double)a[i] / 5;
    if (t < 0) {
      t = 0;
    }
    c.push_back((t + 0.1f));
  }
  sort(c.begin(), c.end());
  for (auto e : b) {
    cout << c.end() - lower_bound(c.begin(), c.end(), e) << " ";
  }
}