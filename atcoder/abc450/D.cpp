#include <bits/stdc++.h>
using namespace std;

vector<int> u;
vector<array<int, 2>> v;

void f(int c, int t) {
  for (auto e : v) {
    if (c + e[1] > 9) continue;
    u.push_back(t * pow(10, e[1]) + e[0]);
    f(c + e[1], t * pow(10, e[1]) + e[0]);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  for (int i = 1; i < 1e9; i *= 2) v.push_back({i, (int)to_string(i).size()});
  f(0, 0);
  sort(u.begin(), u.end());
  unique(u.begin(), u.end());
  
  int N;
  cin >> N;
  cout << u[--N];
}