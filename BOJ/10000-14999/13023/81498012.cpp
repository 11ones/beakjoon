// 2024년 7월 23일 22:42:25
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

vector<int> tv;
bool chk = 0;
void run(vector<int> *&v, int t, int d) {
  if (d >= 4) {
    chk = 1;
    return;
  }
  if (v[t].size() == 1) {
    return;
  }
  for (auto e : v[t]) {
    bool chk2 = 0;
    for (auto ee : tv) {
      if (e == ee) {
        chk2 = 1;
        break;
      }
    }
    if (chk2) {
      continue;
    }
    tv.push_back(e);
    run(v, e, d + 1);
    tv.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, a, b;
  cin >> n >> m;
  vector<int> *v = new vector<int>[n];
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for (int o = 0; o < n; o++) {
    if (v[o].empty()) {
      continue;
    }
    run(v, o, 0);
    if (chk) {
      cout << 1;
      return 0;
    }
  }
  cout << 0;
}