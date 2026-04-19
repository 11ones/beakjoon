// 2024년 9월 16일 16:32:56
// 틀렸습니다
// KB
// ms
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
  for(auto e : v) {
    int t = (e == 1 ? 0 : a[e]);
    for(int i = 1; i * i <= e; i++) {
      if(!(e % i)) {
        t += a[i];
      }
    }
    cout << t - 1 << '\n';
  }
}