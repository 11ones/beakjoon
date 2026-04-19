// 2025년 3월 12일 21:15:27
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  deque<int> q;
  int Q, b = 0, w = 0, d = 0;
  cin >> Q;
  while (Q--) {
    string s;
    cin >> s;
    if (s == "push") {
      cin >> s;
      if (s == "b") {
        b++;
        if (d / 2)
          q.push_back(1);
        else
          q.push_front(1);
      } else {
        w++;
        if (d / 2)
          q.push_back(0);
        else
          q.push_front(0);
      }
    } else if (s == "pop") {
      if (!q.empty()) {
        if (d / 2) {
          q.front() ? --b : --w;
          q.pop_front();
        } else {
          q.back() ? --b : --w;
          q.pop_back();
        }
      }
    } else if (s == "rotate") {
      cin >> s;
      if (s == "l")
        d = (d + 3) % 4;
      else
        d = (d + 1) % 4;
    } else if (s == "count") {
      cin >> s;
      if (s == "b")
        cout << b << '\n';
      else
        cout << w << '\n';
    }
    if (d % 2) {
      for (auto t = q.rbegin(); t != q.rend(); t++) {
        if (*t) {
          b--;
          q.pop_back();
          continue;
        }
        break;
      }
    }
  }
}