// 2023년 12월 28일 23:01:13
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int a, b, n, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  vector<pair<int, int>> *bus = new vector<pair<int, int>>[n + 1];
  int *min = new int[n];

  for (int i = 0; i < m; i++) {
    int x, y, cost;
    cin >> x >> y >> cost;
    bus[x - 1].push_back({y - 1, cost});
  }

  cin >> a >> b;
  a--;
  b--;

  queue<int> q;
  q.push(a);

  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    for (int i = 0; i < bus[tmp].size(); i++) {
      if (min[bus[tmp][i].first] == 0 ||
          min[bus[tmp][i].first] > min[tmp] + bus[tmp][i].second) {
        min[bus[tmp][i].first] = min[tmp] + bus[tmp][i].second;
        q.push(bus[tmp][i].first);
      }
    }
  }
  if (a == b)
    cout << "0";
  else
    cout << min[b];
}