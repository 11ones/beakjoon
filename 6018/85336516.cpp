// 2024년 10월 17일 23:00:44
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

array<int, 1001> v;

int f(int x) {
  if(x != v[x]) {
    return v[x] = f(v[x]);
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, q, a, b;
  cin >> n >> m >> q;
  for(int i = 0; i <= n; i++) {
    v[i] = i;
  }
  while(m--) {
    cin >> a >> b;
    a = f(a);
    b = f(b);
    if(a != b) {
      v[a] = b;
    }
  }
  while(q--) {
    cin >> a >> b;
    cout << (f(a) == f(b) ? "Y\n" : "N\n");
  }
}