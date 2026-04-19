// 2024년 11월 12일 23:07:46
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x, t = 0, l;
  cin >> n;
  vector<int> v;
  for (int i = 2; i < 1'000'000; i++) {
    for (auto e : v) {
      if (e * e >= i) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
  E: {}
  }
  l = v.size();
  int *a = new int[l];
  for (int o = 0; o < n; o++) {
    cin >> x;
    while(x != 1) {
      for(int i = 0; i < l; i++) {
        if(!(x % v[i])) {
          a[i]++ % 2 ? t++ : t--;
          x /= v[i];
          break;
        }
      }
    }
    cout << (t ? "NE\n" : "DA\n");
  }
}