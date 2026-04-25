// 2024년 3월 9일 12:50:13
// 맞았습니다!!
// 6128KB
// 28ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long l;
typedef pair<l, l> p;
typedef vector<p> vp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vp *v = new vp[n];
  p *cty = new p[n]{};
  int **bus = new int *[n];
  for (int i = 0; i < n; i++) {
    bus[i] = new int[n]{};
  }
  fill(&(bus[0][0]), &(bus[n - 1][n]), 1'000'000);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (bus[a - 1][b - 1] > c) {
      bus[a - 1][b - 1] = c;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (bus[i][j] != 1'000'000) {
        v[i].push_back({bus[i][j], j});
      }
    }
  }
  fill_n(&cty[0].first, n * 2, 1'000'000'000'000);
  int x, y;
  cin >> x >> y;
  x--;
  y--;
  priority_queue<p, vp, greater<>> q;
  q.push({0, x});
  cty[x] = {0, -1};
  while (!q.empty()) {
    int ts = q.top().second;
    q.pop();
    for (auto e : v[ts]) {
      if (cty[e.second].first > cty[ts].first + e.first) {
        cty[e.second].first = cty[ts].first + e.first;
        cty[e.second].second = ts;
        q.push({cty[e.second].first, e.second});
      }
    }
  }
  vector<int> vi;
  int ed = y;
  while (1) {
    vi.push_back(ed + 1);
    ed = cty[ed].second;
    if (ed == x) {
      vi.push_back(ed + 1);
      break;
    }
  }

  cout << cty[y].first << "\n" << vi.size() << "\n";
  for (int i = vi.size() - 1; i >= 0; i--) {
    cout << vi[i] << " ";
  }
}