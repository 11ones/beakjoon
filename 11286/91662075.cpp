// 2025년 3월 19일 20:28:54
// 맞았습니다!!
// 2532KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) return a > b;
    return abs(a) > abs(b);
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  priority_queue<int, vector<int>, cmp> q;
  while (n--) {
    cin >> t;
    if (t) {
      q.push(t);
    } else {
      if (q.empty()) {
        cout << "0\n";

      } else {
        cout << q.top() << '\n';
        q.pop();
      }
    }
  }
}