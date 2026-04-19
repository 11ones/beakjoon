// 2024년 12월 12일 23:16:49
// 맞았습니다!!
// 2184KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &a, int x) { return x == a[x] ? x : a[x] = f(a, a[x]); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    a[i] = i;
  }
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x = f(a, x - 1);
    y = f(a, y - 1);
    if (x != y) {
      a[x] = y;
    }
  }
  map<int, int, less<int>> c;
  for (int i = 0; i < n; i++) {
    c[f(a, i)]++;
  }
  int t = 0;
  for(auto e : c) {
    if(t == 2) {
      break;
    }
    cout << e.first + 1 << ' ';
    t++;
  }
  if(t == 1) {
    cout << 1;
  }
}