// 2024년 4월 16일 23:00:55
// 맞았습니다!!
// 5856KB
// 780ms
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int k;
  cin >> k;
  for (int o = 0; o < k; o++) {
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
    int isCont = 0;
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
            isCont = 1;
            break;
          }
          if (vst[e])
            continue;
          vst[e] = 3 - t.second;
          q.push({e, vst[e]});
        }
        if (isCont) {
          break;
        }
      }
      if (isCont) {
        break;
      }
    }
    delete[] vst;
    delete[] ev;
    cout << (isCont ? "NO\n" : "YES\n");
  }
}