// 2024년 4월 29일 23:28:05
// 맞았습니다!!
// 2796KB
// 28ms
#include <algorithm>
#include <iostream>
#include <list>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  cin >> n;
  int m;
  cin >> m;
  cout << m << '\n';
  priority_queue<int> f;
  priority_queue<int, vector<int>, greater<int>> b;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x >= m) {
      b.push(x);
    } else {
      f.push(x);
    }
    if (f.size() < b.size()) {
      f.push(m);
      m = b.top();
      b.pop();
    }
    if (f.size() > b.size()) {
      b.push(m);
      m = f.top();
      f.pop();
    }
    cout << m << '\n';
  }
}