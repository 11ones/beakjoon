// 2024년 5월 5일 20:01:22
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int n, x, cnt = 0;
  cin >> n;
  vector<int> *v = new vector<int>[n] {};
  queue<int> q;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x != -1) {
      v[x].push_back(i);
      continue;
    }
    q.push(i);
  }
  cin >> x;
  vector<bool> vst(n);
  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    if (vst[tmp] || x == tmp) {
      continue;
    }
    vst[tmp] = 1;
    if (v[tmp].empty()) {
      cnt++;
      continue;
    }
    for (int e : v[tmp]) {
      if (!vst[e]) {
        q.push(e);
      }
    }
  }
  cout << cnt;
}