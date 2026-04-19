// 2025년 3월 26일 20:58:10
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int n, mx = 0, x;
vector<int> t, v, vst;
void f() {
  if(t.size() == n) {
    int s = 0;
    for(int i = 1; i < n; i++) {
      s += abs(t[i] - t[i - 1]);
    }
    mx = max(mx, s);
    return;
  }
  for(int i = 0; i < n; i++) {
    if(vst[i]) continue;
    t.push_back(v[i]);
    vst[i] = 1;
    f();
    t.pop_back();
    vst[i] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  vst = vector<int>(n);
  f();
  cout << mx;
}