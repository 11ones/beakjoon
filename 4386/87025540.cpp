// 2024년 11월 30일 17:22:58
// 맞았습니다!!
// 2300KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &u, int x) {
  if (u[x] == x) return x;
  return u[x] = f(u, u[x]);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<double, double>> v(n);
  vector<pair<double, pair<int, int>>> t;
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      t.push_back({sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2)), {j, i}});
    }
  }
  sort(t.begin(), t.end());
  vector<int> u(n);
  for(int i = 0; i < n; i++) {
    u[i] = i;
  }
  double d = 0;
  for(auto e : t) {
    int a = f(u, e.second.first);
    int b = f(u, e.second.second);
    if(a != b) {
      u[a] = b;
      d += e.first;
    }
  }
  cout << d;
}