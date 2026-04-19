// 2024년 5월 16일 23:54:22
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int F, S, G, U, D;
  cin >> F >> S >> G >> U >> D;
  vector<int> d(F, -1);
  queue<int> q;
  d[S - 1] = 0;
  q.push(S - 1);
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    if (t + U <= F && d[t + U] == -1) {
      d[t + U] = d[t] + 1;
      q.push(t + U);
    }
    if (t - D > 0 && d[t - D] == -1) {
      d[t - D] = d[t] + 1;
      q.push(t - D);
    }
  }
  cout << (d[G - 1] == -1 ? "use the stairs" : to_string(d[G - 1]));
}