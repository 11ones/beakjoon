// 2023년 12월 27일 22:35:25
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef vector<pair<int, int>> vp;

int main() {

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