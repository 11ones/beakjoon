// 2024년 2월 19일 23:23:25
// 맞았습니다!!
// 10408KB
// 80ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<p> *v = new vector<p>[n] {};
  p *vp = new p[n]{};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    while (1) {
      int a, b;
      cin >> a;
      if (a == -1) {
        break;
      }
      cin >> b;
      v[x - 1].push_back({b, a - 1});
    }
  }
  queue<int> q;
  queue<int> c;
  bool *vst = new bool[n]{};
  bool *vstp = new bool[n]{};
  int *amx = new int[n]{};
  int mx = 0;
  q.push(0);
  vst[0] = 1;
  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    bool check = 1;
    for (auto e : v[tmp]) {
      if (!vst[e.second]) {
        q.push(e.second);
        vp[e.second] = {e.first, tmp};
        vst[e.second] = 1;
        check = 0;
      }
    }
    int x = vp[tmp].second;
    if (check) {
      amx[tmp] = vp[tmp].first;
      if (!vstp[x]) {
        c.push(x);
        vstp[x] = 1;
      }
    }
  }
  while (!c.empty()) {
    int tmp = c.front();
    c.pop();
    if (tmp) {
      int tmx1 = 0, tmx2 = 0;
      for (auto e : v[tmp]) {
        if (e.second == vp[tmp].second) {
          continue;
        }
        int x = amx[e.second];
        if (tmx1 < x) {
          tmx2 = tmx1;
          tmx1 = x;
        } else if (tmx2 < x) {
          tmx2 = x;
        }
      }
      if (mx < tmx1 + tmx2) {
        mx = tmx1 + tmx2;
      }
      amx[tmp] = tmx1 + vp[tmp].first;
      c.push(vp[tmp].second);
    } else {
      int tmx1 = 0, tmx2 = 0;
      for (auto e : v[tmp]) {
        int x = amx[e.second];
        if (tmx1 < x) {
          tmx2 = tmx1;
          tmx1 = x;
        } else if (tmx2 < x) {
          tmx2 = x;
        }
      }
      if (mx < tmx1 + tmx2) {
        mx = tmx1 + tmx2;
      }
    }
  }
  cout << mx;
}