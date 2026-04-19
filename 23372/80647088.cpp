// 2024년 7월 7일 14:50:42
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
#define MOD 12'345'678'910
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
    c.push_back((int)t);
  }
  sort(c.begin(), c.end());
  for (auto e : b) {
    cout << c.end() - lower_bound(c.begin(), c.end(), e) << " ";
  }
}