// 2024년 7월 18일 00:00:05
// 맞았습니다!!
// 21580KB
// 1064ms
#include <iostream>
#include <queue>
#include <vector>
#define MAX 1'000'000
using namespace std;

int main() {
  int n, m, k, x;
  cin >> n >> m >> k >> x;
  vector<int> *v = new vector<int>[n], vst(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    v[a - 1].push_back(b - 1);
  }
  fill(vst.begin(), vst.end(), MAX);
  vst[x - 1] = 0;
  queue<int> q;
  q.push(x - 1);
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    for(auto e : v[t]) {
      if(vst[e] > vst[t] + 1) {
        vst[e] = vst[t] + 1;
        q.push(e);
      }
    }
  }
  vector<int> t;
  for(int i = 0; i < n; i++) {
    if(vst[i] == k) {
      t.push_back(i);
    }
  }
  if(t.empty()) {
    cout << -1;
    return 0;
  }
  for(auto e : t) {
    cout << e + 1 << '\n';
  }
}