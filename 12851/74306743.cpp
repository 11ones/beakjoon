// 2024년 3월 2일 23:25:48
// 맞았습니다!!
// 3848KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

pair<int, int> d[200'001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  fill(&d[0], &d[200'000], make_pair(1'000'000, 0));
  queue<int> q;
  q.push(n);
  d[n] = {0, 1};
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    if (t > 0) {
      if (d[t - 1].first > d[t].first + 1) {
        d[t - 1] = {d[t].first + 1, d[t].second};
        q.push(t - 1);
      } else if (d[t - 1].first == d[t].first + 1) {
        d[t - 1].second += d[t].second;
      }
    }
    if (t < k) {
      if (d[t + 1].first > d[t].first + 1) {
        d[t + 1] = {d[t].first + 1, d[t].second};
        q.push(t + 1);
      } else if (d[t + 1].first == d[t].first + 1) {
        d[t + 1].second += d[t].second;
      }
      if (d[t * 2].first > d[t].first + 1) {
        d[t * 2] = {d[t].first + 1, d[t].second};
        q.push(t * 2);
      } else if (d[t * 2].first == d[t].first + 1) {
        d[t * 2].second += d[t].second;
      }
    }
  }
  cout << d[k].first << '\n' << d[k].second;
}