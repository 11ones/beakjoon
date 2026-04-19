// 2023년 12월 29일 00:06:50
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;
typedef vector<p> vp;
typedef priority_queue<p, vp, greater<p>> qp;

struct cmp {
  bool operator()(p &a, p &b) {
    if (a.first != b.first) {
      return a.first > b.first;
    } else {
      return a.second > b.second;
    }
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int v, e, k;
  cin >> v >> e >> k;
  int *low = new int[v];
  vp *line = new vp[v];
  k--;
  int t, u, w;
  for (int i = 0; i < e; i++) {
    cin >> t >> u >> w;
    line[t - 1].push_back({u - 1, w});
  }

  for (int i = 1; i < v; i++) {
    low[i] = 2000000000;
  }
  
  qp q;
  q.push({0, 0});

  while (!q.empty()) {
    p tq = q.top();
    int tmp = tq.second;
    q.pop();
    if (tq.first > low[tmp])
      continue;
    for (int i = 0; i < line[tmp].size(); i++) {
      if (low[line[tmp][i].first] > low[tmp] + line[tmp][i].second) {
        low[line[tmp][i].first] = low[tmp] + line[tmp][i].second;
        q.push({low[line[tmp][i].first], line[tmp][i].first});
      }
    }
  }

  for (int i = 0; i < v; i++) {
    if (i == k)
      cout << "0\n";
    else if (low[i] == 2000000000)
      cout << "INF\n";
    else
      cout << low[i] << '\n';
  }
}