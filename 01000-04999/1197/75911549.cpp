// 2024년 3월 28일 23:42:36
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
#define MAX 2'147'483'647
using namespace std;

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
  int *d = new int[vtx]{};
  fill(&d[0], &d[vtx], -1);
  d[q.top().a] = d[q.top().b] = min(q.top().a, q.top().b);
  ans += q.top().c;
  q.pop();
  while (!q.empty()) {
    s t = q.top();
    q.pop();
    if (d[t.a] == -1 && d[t.b] == -1) {
      d[t.a] = d[t.b] = min(t.a, t.b);
    } else if (d[t.a] != -1 && d[t.b] != -1) {
      if (d[t.a] == d[t.b]) {
        continue;
      }
      int tmp = max(d[t.a], d[t.b]);
      for (int i = tmp; i < vtx; i++) {
        if (d[i] == tmp)
          d[i] = min(d[t.a], d[t.b]);
      }
    } else {
      d[t.a] = d[t.b] = max(d[t.a], d[t.b]);
    }
    ans += t.c;
  }
  cout << ans;
}