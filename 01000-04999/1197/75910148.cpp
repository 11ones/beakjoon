// 2024년 3월 28일 23:21:29
// 메모리 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
#define MAX 2'147'483'647
using namespace std;

typedef pair<int, int> p;
typedef struct {
  int c;
  int a;
  int b;
} s;

struct cmp {
  bool operator()(s a, s b) { return a.c > b.c; }
};

int main() {
  int vtx, n;
  cin >> vtx >> n;
  priority_queue<s, vector<s>, cmp> q;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (c < 0) {
      ans += c;
      q.push({0, b - 1});
      q.push({0, a - 1});
    } else {
      q.push({c, a - 1, b - 1});
      q.push({c, b - 1, a - 1});
    }
  }
  vector<int> *v = new vector<int>[vtx];
  while (!q.empty()) {
    s t = q.top();
    q.pop();

    int cnt = 0;
    priority_queue<int, vector<int>, greater<int>> tq;
    bool *d = new bool[vtx]{};
    tq.push(t.a);
    d[t.a] = 1;
    while (!tq.empty()) {
      int ft = tq.top();
      tq.pop();
      for (auto e : v[ft]) {
        if (d[e] == 0) {
          d[e] = 1;
          cnt++;
          tq.push(e);
        }
      }
    }
    if (d[t.b] == 0) {
      v[t.a].push_back(t.b);
      v[t.b].push_back(t.a);
      ans += t.c;
    }
    if (cnt >= vtx) {
      break;
    }
  }
  cout << ans;
}