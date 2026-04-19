// 2024년 6월 23일 19:16:44
// 맞았습니다!!
// 2272KB
// 276ms
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
      r += 1;
      t[0] = '(';
    }
    int x = 1, l = t.length(), i = 1;
    for (; i < l; i++) {
      if (t[i] == '(') {
        x++;
      } else {
        x--;
      }
      if (x == 0) {
        if (i == l - 1) {
          break;
        }
        q.push(t.substr(i + 1));
        break;
      }
    }
    if (x) {
      r += x / 2;
    }
  }
  cout << r;
}