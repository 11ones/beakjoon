// 2023년 12월 28일 00:09:12
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;
typedef vector<p> vp;

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
  priority_queue<p, vp, cmp> *tline = new priority_queue<p, vp, cmp>[v];
  vp *line = new vp[v];
  k--;
  int t, u, w;
  for (int i = 0; i < e; i++) {
    cin >> t >> u >> w;
    tline[t - 1].push({u - 1, w});
  }

  for (int i = 0; i < v; i++) {
    if (!tline[i].empty()) {
      line[i].push_back(tline[i].top());
      tline[i].pop();
    }
    while (!tline[i].empty()) {
      if (tline[i].top().first != line[i].back().first) {
        line[i].push_back(tline[i].top());
        tline[i].pop();
      } else {
        tline[i].pop();
      }
    }
  }

  queue<int> q;
  q.push(k);
  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    for (auto elem : line[tmp]) {
      if (low[elem.first] == 0 || low[elem.first] > low[tmp] + elem.second) {
        low[elem.first] = low[tmp] + elem.second;
        q.push(elem.first);
      }
    }
  }

  for (int i = 0; i < v; i++) {
    if (i == k)
      cout << "0\n";
    else if (low[i] == 0)
      cout << "INF\n";
    else
      cout << low[i] << '\n';
  }
}