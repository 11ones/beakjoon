// 2024년 7월 2일 22:52:18
// 맞았습니다!!
// 4484KB
// 12ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  int mx = max(n, k);
  p *d = new p[mx * 2];
  fill(&d[0], &d[mx * 2], make_pair(1'000'000, -1));
  queue<int> q;
  q.push(n);
  d[n] = {0, n};
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    if (t < k && d[t + 1].first > d[t].first + 1) {
      d[t + 1].first = d[t].first + 1;
      d[t + 1].second = t;
      q.push(t + 1);
    }
    if (t > 0 && d[t - 1].first > d[t].first + 1) {
      d[t - 1].first = d[t].first + 1;
      d[t - 1].second = t;
      q.push(t - 1);
    }
    if ((2 * t < k || 2 * k > 3 * t) && d[t * 2].first > d[t].first + 1) {
      d[t * 2].first = d[t].first + 1;
      d[t * 2].second = t;
      q.push(t * 2);
    }
  }
  vector<int> v;
  int t = k;
  while (t != n) {
    v.push_back(t);
    t = d[t].second;
  }
  v.push_back(n);
  reverse(v.begin(), v.end());
  cout << d[k].first << '\n';
  for(auto e : v) {
    cout << e << ' ';
  }
}