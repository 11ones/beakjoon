// 2024년 3월 9일 12:20:29
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;
typedef vector<p> vp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vp *v = new vp[n];
  p *cty = new p[n]{};
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a - 1].push_back({c, b - 1});
  }
  fill_n(&cty[0].first, n * 2, 1'000'000'000);
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
      int ef = e.first;
      int es = e.second;
      if (cty[es].first > cty[ts].first + ef) {
        cty[es].first = cty[ts].first + ef;
        cty[es].second = ts;
        q.push({cty[es].first, es});
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