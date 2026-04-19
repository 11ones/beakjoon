// 2024년 4월 16일 23:05:53
// 맞았습니다!!
// 5972KB
// 256ms
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void run() {
  int v, e;
  cin >> v >> e;
  vector<int> *ev = new vector<int>[v];
  for (int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    ev[a - 1].push_back(b - 1);
    ev[b - 1].push_back(a - 1);
  }
  int *vst = new int[v]{};
  for (int i = 0; i < v; i++) {
    if (vst[i])
      continue;
    vst[i] = 1;
    queue<pair<int, int>> q;
    q.push({i, 1});
    while (!q.empty()) {
      auto t = q.front();
      q.pop();
      for (auto e : ev[t.first]) {
        if (vst[e] == t.second) {
          cout << "NO\n";
          delete[] vst;
          delete[] ev;
          return;
        }
        if (vst[e])
          continue;
        vst[e] = 3 - t.second;
        q.push({e, vst[e]});
      }
    }
  }
  delete[] vst;
  delete[] ev;
  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k;
  cin >> k;
  for (int o = 0; o < k; o++) {
    run();
  }
}