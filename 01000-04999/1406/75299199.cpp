// 2024년 3월 19일 23:26:36
// 맞았습니다!!
// 21020KB
// 68ms
#include <iostream>
#include <list>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  list<char> lst;
  for (auto e : s) {
    lst.push_back(e);
  }
  list<char>::iterator cur = lst.end();
  int m;
  cin >> m;
  for (int o = 0; o < m; o++) {
    char c;
    cin >> c;
    switch (c) {
    case 'L':
      if (cur != lst.begin())
        cur--;
      break;
    case 'D':
      if (cur != lst.end())
        cur++;
      break;
    case 'B':
      if (cur != lst.begin()) {
        cur = lst.erase(--cur);
      }
      break;
    case 'P':
      char x;
      cin >> x;
      lst.insert(cur, x);
    }
  }
  for (auto e : lst) {
    cout << e;
  }
}