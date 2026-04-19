// 2024년 2월 26일 23:32:08
// 맞았습니다!!
// 5728KB
// 40ms
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

  int n, e;
  cin >> n >> e;
  vp *v = new vp[n];
  int *arr = new int[n];
  for (int i = 0; i < e; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a - 1].push_back({c, b - 1});
    v[b - 1].push_back({c, a - 1});
  }
  int tov1 = 0, tov2 = 0;
  bool cv1 = 1, cv2 = 1;
  int v1, v2;
  cin >> v1 >> v2;
  v1--;
  v2--;
  p qp[3] = {{0, 0}, {0, v1}, {0, v2}};
  for (int o = 0; o < 3; o++) {
    fill(arr, arr + n, MAX);
    arr[qp[o].second] = 0;
    priority_queue<p, vp, greater<p>> q;
    q.push(qp[o]);
    while (!q.empty()) {
      p tmp = q.top();
      q.pop();
      auto &t = v[tmp.second];
      for (auto e : t) {
        if (arr[e.second] > arr[tmp.second] + e.first) {
          arr[e.second] = arr[tmp.second] + e.first;
          q.push({arr[e.second], e.second});
        }
      }
    }
    switch (o) {
    case 0:
      tov1 = arr[v1];
      if (arr[v1] == MAX) {
        cv1 = 0;
      }
      tov2 = arr[v2];
      if (arr[v2] == MAX) {
        cv2 = 0;
      }
      break;
    case 1:
      if (cv1) {
        tov1 += arr[v2];
        if (arr[v2] == MAX) {
          cv1 = 0;
        }
      }
      if (cv2) {
        tov2 += arr[n - 1];
        if (arr[n - 1] == MAX) {
          cv2 = 0;
        }
      }
      break;
    case 2:
      if (cv1) {
        tov1 += arr[n - 1];
        if (arr[n - 1] == MAX) {
          cv1 = 0;
        }
      }
      if (cv2) {
        tov2 += arr[v1];
        if (arr[v1] == MAX) {
          cv2 = 0;
        }
      }
    }
  }
  if (!(cv1 || cv2)) {
    cout << "-1";
  } else {
    cout << min(tov1, tov2);
  }
}