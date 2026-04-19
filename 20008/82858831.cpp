// 2024년 8월 22일 23:44:13
// 맞았습니다!!
// 2024KB
// 24ms
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;

vector<p> v;
int n, h, mn = 10000;

void run(vector<int> c, int r, int t) {
  if(r <= 0) {
    mn = min(mn, t);
    return;
  }
  for(int i = 0; i < n; i++) {
    if(c[i]) {
      c[i]--;
    }
  }
  bool chk = 1;
  for(int i = 0; i < n; i++) {
    if(!c[i]) {
      chk = 0;
      c[i] = v[i].first;
      run(c, r - v[i].second, t + 1);
      c[i] = 0;
    }
  }
  if(chk) {
    run(c, r, t + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> h;
  vector<int> c(n);
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  run(c, h, 0);
  cout << mn;
}