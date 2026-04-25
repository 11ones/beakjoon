// 2024년 2월 24일 18:33:26
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int n, m, cnt = 0, x;
  cin >> n >> m;
  vector<int> *pty = new vector<int>[m] {};
  bool *tru = new bool[n]{};
  bool *vst = new bool[n]{};
  bool **v = new bool *[n];
  for (int i = 0; i < n; i++) {
    v[i] = new bool[n]{};
  }
  vector<int> ltru;
  int ntru;
  cin >> ntru;
  for (int i = 0; i < ntru; i++) {
    cin >> x;
    tru[x - 1] = 1;
  }
  for (int i = 0; i < m; i++) {
    cin >> x;
    for (int j = 0; j < x; j++) {
      int t;
      cin >> t;
      pty[i].push_back(t - 1);
    }
  }
  for (int i = 0; i < m; i++) {
    auto &t = pty[i];
    for (int j = 0; j < t.size() - 1; j++) {
      for (int k = j + 1; k < t.size(); k++) {
        v[t[j]][t[k]] = 1;
        v[t[k]][t[j]] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (vst[i] || !tru[i]) {
      continue;
    }
    vst[i] = 1;
    queue<int> q;
    q.push(i);
    while (!q.empty()) {
      int t = q.front();
      q.pop();
      for (int j = 0; j < n; j++) {
        if (v[t][j] && !vst[j]) {
          q.push(j);
          vst[j] = 1;
          tru[j] = 1;
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (!tru[i]) {
      ltru.push_back(i);
    }
  }
  for (int i = 0; i < m; i++) {
    sort(pty[i].begin(), pty[i].end());
    x = 0;
    int l = pty[i].size();
    for (auto e : ltru) {
      if (e == pty[i][x]) {
        x++;
      }
      if (x >= l) {
        cnt++;
        break;
      }
    }
  }

  cout << cnt;
}