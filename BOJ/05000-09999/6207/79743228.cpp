// 2024년 6월 17일 23:03:30
// 맞았습니다!!
// 2168KB
// 4ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n, m;
  cin >> k >> n >> m;

  vector<int> cow(k);
  vector<bool> v(n);
  vector<int> *p = new vector<int>[n];

  for (int i = 0; i < k; i++) {
    cin >> cow[i];
    cow[i]--;
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    p[a - 1].push_back(b - 1);
  }

  fill(v.begin(), v.end(), 1);
  for (auto e : cow) {
    vector<bool> tv(n);
    queue<int> q;
    q.push(e);
    tv[e] = 1;
    while (!q.empty()) {
      int t = q.front();
      q.pop();
      for (auto e2 : p[t]) {
        if (tv[e2]) {
          continue;
        }
        tv[e2] = 1;
        q.push(e2);
      }
    }
    for (int i = 0; i < n; i++) {
      v[i] = v[i] & tv[i];
    }
  }
  int sum = 0;
  for(auto e : v) {
    sum += e;
  }
  cout << sum;
}