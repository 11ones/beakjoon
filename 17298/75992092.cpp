// 2024년 3월 30일 13:19:18
// 맞았습니다!!
// 18344KB
// 320ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  int *d = new int[n];
  fill(&d[0], &d[n], -1);
  priority_queue<p, vector<p>, greater<p>> q;
  for (int i = 0; i < n; i++) {
    cin >> x;
    while (!q.empty()) {
      if (x > q.top().first) {
        d[q.top().second] = x;
        q.pop();
        continue;
      }
      break;
    }
    q.push({x, i});
  }
  for (int i = 0; i < n; i++) {
    cout << d[i] << " ";
  }
}