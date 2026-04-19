// 2024년 9월 16일 16:45:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

array<int, 1'000'001> a{};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

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