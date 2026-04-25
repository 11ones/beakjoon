// 2025년 3월 13일 11:58:34
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  char c;
  cin >> n;
  vector<int> v(n), s;
  for (auto &e : v) {
    cin >> c;
    if (c == 'T') e = 1;
  }
  while (cin >> c) {
    if (c >= 'A' && c <= 'Z') {
      s.push_back(v[c - 'A']);
    } else {
      switch (c) {
        case '*':
          n = s.back() & s[s.size() - 2];
          s.pop_back();
          break;
        case '+':
          n = s.back() | s[s.size() - 2];
          s.pop_back();
          break;
        case '-':
          n = !s.back();
          break;
      }
      s.pop_back();
      s.push_back(n);
    }
  }
  cout << (s[0] ? 'T' : 'F');
}