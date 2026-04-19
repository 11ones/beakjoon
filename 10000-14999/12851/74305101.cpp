// 2024년 3월 2일 22:55:50
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
using namespace std;

pair<int, int> d[200'000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  fill_n(&d[0].first, 399'999, 1'000'000);
  queue<int> q;
  q.push(n);
  d[n] = {0, 1};
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    if (d[t + 1].first > d[t].first + 1) {
      d[t + 1] = {d[t].first + 1, d[t].second};
      q.push(t + 1);
    } else if (d[t + 1].first == d[t].first + 1) {
      d[t + 1].second += d[t].second;
      q.push(t + 1);
    }
    if (t > 0) {
      if (d[t - 1].first > d[t].first + 1) {
        d[t - 1] = {d[t].first + 1, d[t].second};
        q.push(t - 1);
      } else if (d[t - 1].first == d[t].first + 1) {
        d[t - 1].second += d[t].second;
        q.push(t - 1);
      }
    }
    if (t < k) {
      if (d[t * 2].first > d[t].first + 1) {
        d[t * 2] = {d[t].first + 1, d[t].second};
        q.push(t * 2);
      } else if (d[t * 2].first == d[t].first + 1) {
        d[t * 2].second += d[t].second;
        q.push(t * 2);
      }
    }
  }
  cout << d[k].first << '\n' << d[k].second;
}