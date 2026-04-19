// 2023년 12월 28일 23:55:40
// 맞았습니다!!
// 4744KB
// 36ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;
typedef vector<p> vp;
typedef priority_queue<p, vp, greater<p>> pq;

int a, b, n, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  vp *bus = new vp[n + 1];
  int *min = new int[n];

  for (int i = 0; i < m; i++) {
    int x, y, cost;
    cin >> x >> y >> cost;
    bus[x - 1].push_back({y - 1, cost});
  }

  for (int i = 0; i < n; i++) {
    min[i] = 2000000000;
  }

  cin >> a >> b;
  a--;
  b--;
  min[a] = 0;

  pq q;
  q.push({0, a});

  while (!q.empty()) {
    p tq = q.top();
    int tmp = tq.second;
    q.pop();
    if (tq.first > min[tmp])
      continue;
    for (int i = 0; i < bus[tmp].size(); i++) {
      if (min[bus[tmp][i].first] > min[tmp] + bus[tmp][i].second) {
        min[bus[tmp][i].first] = min[tmp] + bus[tmp][i].second;
        q.push({min[bus[tmp][i].first], bus[tmp][i].first});
      }
    }
  }
  cout << min[b];
}