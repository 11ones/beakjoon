// 2024년 3월 31일 15:25:50
// 맞았습니다!!
// 3944KB
// 24ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<int> *edge = new vector<int>[n];
  int *left = new int[n]; // 바로 앞에 서야하는 사람의 수
  queue<int> q; // 남은사람 중 맨 앞에 설 수 있는 사람
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    edge[a - 1].push_back(b - 1);
    left[b - 1]++;
  }

  for (int i = 0; i < n; i++) {
    if (left[i] == 0) // 앞에 설 사람이 없으므로 맨 앞에 설 수 있음
      q.push(i);
  }

  while (!q.empty()) {
    int tmp = q.front();
    cout << tmp + 1 << " ";
    q.pop();
    for (auto e : edge[tmp]) {
      if (--left[e] == 0) // 앞 사람이 빠졌으니 1을 빼줌
        q.push(e);
    }
  }
  delete[] edge;
  delete[] left;
}