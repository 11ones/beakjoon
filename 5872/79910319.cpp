// 2024년 6월 21일 23:17:02
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;

  int r = 0;
  queue<string> q;
  q.push(s);
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    if (t[0] == ')') {
      r++;
      if (t.length() > 1) {
        q.push(t.substr(1));
      }
      continue;
    }
    int x = 1, l = t.length();
    for (int i = 1; i < l; i++) {
      if (t[i] == '(') {
        x++;
      } else {
        x--;
      }
      if (x == 0) {
        if (i == l - 1) {
          break;
        }
        q.push(t.substr(0, i + 1));
        q.push(t.substr(i + 1));
        break;
      }
    }
    if (x) {
      r += x;
    }
  }
  cout << r;
}