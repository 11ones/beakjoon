// 2024년 3월 4일 18:39:01
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
#define MAX 1'000'000'000
using namespace std;
typedef pair<int, int> p;
typedef vector<p> vp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, r;
  cin >> n >> m >> r;

  vp *vr = new vp[n];
  int *vt = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> vt[i];
  }
  for (int i = 0; i < r; i++) {
    int a, b, l;
    cin >> a >> b >> l;
    vr[a - 1].push_back({l, b - 1});
    vr[b - 1].push_back({l, a - 1});
  }
  int mx = 0;
  for (int o = 0; o < n; o++) {
    priority_queue<p, vp, greater<>> q;
    q.push({0, o});
    int *vst = new int[n];
    fill(&vst[0], &vst[n], MAX);
    vst[o] = 1;
    while (!q.empty()) {
      auto t = q.top().second;
      q.pop();
      for (auto e : vr[t]) {
        if (vst[t] + e.first < vst[e.second] && vst[t] + e.first <= m) {
          vst[e.second] = vst[t] + e.first;
          q.push({vst[e.second], e.second});
        }
      }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (vst[i] != MAX) {
        sum += vt[i];
      }
    }
    if (sum > mx) {
      mx = sum;
    }
    delete[] vst;
  }
  cout << mx;
}