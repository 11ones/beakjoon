// 2024년 4월 16일 22:51:50
// 틀렸습니다
// KB
// ms
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
    bool *vst = new bool[v]{};
    int tmp = 0;
    bool isCycle = 0;
    for (int i = 0; i < v; i++) {
      if (vst[i]) {
        continue;
      }
      tmp++;
      vst[i] = 1;
      queue<pair<int,int>> q;
      q.push({i, i});
      while (!q.empty()) {
        auto t = q.front();
        q.pop();
        for (auto e : ev[t.first]) {
          if (e == t.second)
            continue;
          if(vst[e]) {
            isCycle = 1;
            continue;
          }
          vst[e] = 1;
          q.push({e, t.first});
        }
      }
    }
    delete[] vst;
    delete[] ev;
    if(tmp > 1 || !isCycle) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}