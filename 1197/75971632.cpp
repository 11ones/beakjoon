// 2024년 3월 29일 22:40:48
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
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
      q.push({0, a - 1, b - 1});
    } else {
      q.push({c, a - 1, b - 1});
    }
  }
  int *d = new int[vtx]{};
  fill(&d[0], &d[vtx], -1);
  while (!q.empty()) {
    s t = q.top();
    q.pop();
    if (d[t.a] == -1 && d[t.b] == -1) {
      d[t.a] = d[t.b] = min(t.a, t.b);
    } else if (d[t.a] != -1 && d[t.b] != -1) {
      if (d[t.a] == d[t.b]) {
        continue;
      }
      for (int i = max(d[t.a], d[t.b]); i < vtx; i++) {
        if (d[i] == max(d[t.a], d[t.b]))
          d[i] = min(d[t.a], d[t.b]);
      }
    } else {
      if (d[t.a] == -1 && t.a < d[t.b]) {
        int tmp = d[t.b];
        for (int i = tmp; i < vtx; i++) {
          if (d[i] == tmp) {
            d[i] = t.a;
          }
        }
      } else if (d[t.b] == -1 && t.b < d[t.a]) {
        int tmp = d[t.a];
        for (int i = tmp; i < vtx; i++) {
          if (d[i] == tmp) {
            d[i] = t.b;
          }
        }
      } else {
        d[t.b] = d[t.a] = max(d[t.a], d[t.b]);
      }
    }
    ans += t.c;
  }
  cout << ans;
}