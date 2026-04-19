// 2024년 2월 6일 23:13:07
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> P;

struct node {
  vector<P> p;
  vector<P> c;
  int mx = 0;
  bool vst = 0;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int mx = 0;
  node arr[10001]{};
  for (int i = 0; i < n - 1; i++) {
    int p, c, w;
    cin >> p >> c >> w;
    arr[p].c.push_back({c, w});
    arr[c].p.push_back({p, w});
  }
  queue<int> qt;
  for (int i = 1; i <= n - 1; i++) {
    if (arr[i].c.empty()) {
      for (auto e : arr[i].p) {
        if (arr[e.first].vst == 0)
          qt.push(e.first);
        arr[e.first].vst = 1;
      }
    }
  }
  while (qt.size()) {
    int tmp = qt.front();
    qt.pop();
    auto &t = arr[tmp];
    int m1 = 0, m2 = 0;
    for (auto e : t.c) {
      int mt = arr[e.first].mx + e.second;
      if (mt > m1) {
        m2 = m1;
        m1 = mt;
      } else if (mt > m2) {
        m2 = mt;
      }
    }
    t.mx = m1;
    if (mx < m1 + m2) {
      mx = m1 + m2;
    }
    for (auto e : t.p) {
      if (arr[e.first].vst == 0)
        qt.push(e.first);
      arr[e.first].vst = 1;
    }
  }
  cout << mx;
}