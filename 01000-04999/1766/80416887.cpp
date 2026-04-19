// 2024년 7월 2일 22:28:40
// 맞았습니다!!
// 3944KB
// 32ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> *v = new vector<int>[n];
  int *arr = new int[n];
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    v[a - 1].push_back(b - 1);
    arr[b - 1]++;
  }
  for(int i = 0; i < n; i++) {
    if(!arr[i]) {
      q.push(i);
    }
  }
  while(!q.empty()) {
    int t = q.top();
    cout << t + 1 << ' ';
    q.pop();
    for(auto e : v[t]) {
      if(!--arr[e]) {
        q.push(e);
      }
    }
  }
}