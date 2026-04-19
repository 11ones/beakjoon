// 2024년 11월 24일 19:20:38
// 컴파일 에러
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n, r, q;
array<vector<int>, 100001> v{};
array<int, 100001> a{};

int f(int p, int x) {
  int t = 1;
  for(auto e : v[x]) {
    if(e != p) {
      t += f(x, e);
    }
  }
  return a[x] = t;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> r >> q;
  while(--n) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  f(r, r);
  while(q--) {
    int x;
    cin >> x;
    cout << a[x] << '\n';
  }
}