// 2024년 9월 16일 16:49:08
// 맞았습니다!!
// 6196KB
// 104ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<int, 1'000'001> a{};
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    a[v[i]]++;
  }
  for (auto e : v) {
    int t = 0;
    for (int i = 1; i * i <= e; i++) {
      if (!(e % i)) {
        t += a[i];
        if (i * i != e) {
          t += a[e / i];
        }
      }
    }
    cout << t - 1 << '\n';
  }
}