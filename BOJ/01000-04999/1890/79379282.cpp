// 2024년 6월 8일 14:52:59
// 메모리 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long l;
typedef pair<int, int> p;

struct cmp {
  bool operator()(p a, p b) { return a.first + a.second > b.first + b.second; }
};

int main() {
  int n;
  cin >> n;
  l **arr = new l *[n], **d = new l *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new l[n]{};
    d[i] = new l[n]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  priority_queue<p, vector<p>, cmp> q;
  q.push({0, 0});
  d[0][0] = 1;
  while (!q.empty()) {
    int qx = q.top().second;
    int qy = q.top().first;
    int jmp = arr[qy][qx];
    q.pop();
    if(qy == n - 1 && qx == n - 1) {
      continue;
    }
    if (qx + jmp < n) {
      q.push({qy, qx + jmp});
      d[qy][qx + jmp] += d[qy][qx];
    }
    if (qy + jmp < n) {
      q.push({qy + jmp, qx});
      d[qy + jmp][qx] += d[qy][qx];
    }
  }
  cout << d[n - 1][n - 1];
}