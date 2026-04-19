// 2023년 12월 28일 00:01:07
// 컴파일 에러
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
    if (a.first == b.first) {
      return a.second > b.second;
    } else {
      return a.first > b.first;
    }
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int v, e, k;
  cin >> v >> e >> k;
  int *low = new int[v];
  priority_queue<p, vp, cmp> *line = new priority_queue<p, vp, cmp>[v];
  k--;
  int t, u, w;
  for (int i = 0; i < e; i++) {
    cin >> t >> u >> w;
    if (u == k)
      continue;
    line[t - 1].push({u - 1, w});
  }

  queue<int> q;
  q.push(k);
  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    for (int i = 0; i < line[tmp].size(); i++) {
      if (low[line[tmp][i].first] == 0 || low[line[tmp][i].first] > low[tmp] + line[tmp][i].second) {
        low[line[tmp][i].first] = low[tmp] + line[tmp][i].second;
        q.push(line[tmp][i].first);
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