// 2024년 9월 28일 15:30:01
// 100점
// 5220KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<double, double>> v;

void find(double s, double e) {
  double m = (s + e) / 2;
  double t = 1;
  for (auto e : v) {
    if (e.second <= m) {
      t = 0;
      break;
    }
    if (e.first <= m) {
      t *= (e.second - m) / (e.second - e.first);
    }
  }
    if (fabs(t - 0.5) <= 1e-10) {
      cout.precision(10);
    cout << m;
    return;
  }
  if (t >= 0.5)
    find(m, e);
  else
    find(s, m);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  find(0, 1e5);
}