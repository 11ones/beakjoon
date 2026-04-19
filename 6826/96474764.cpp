// 2025년 7월 18일 15:59:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<char> q;
  for (int i = 0; i < 5; ++i) {
    q.push_back('A' + i);
  }
  int a, b;
  char t, u;
  while (cin >> a >> b) {
    while (b--) {
      switch (a) {
        case 1:
          q.push_back(q.front());
          q.pop_front();
          break;
        case 2:
          q.push_front(q.back());
          q.pop_back();
          break;
        case 3:
          t = q.front();
          q.pop_front();
          u = q.front();
          q.pop_front();
          q.push_front(t);
          q.push_front(u);
          break;
        case 4:
          goto E;
      }
    }
  }
E:
  for (auto e : q) {
    cout << e << " ";
  }
}