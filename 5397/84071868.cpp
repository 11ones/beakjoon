// 2024년 9월 19일 23:43:15
// 맞았습니다!!
// 19468KB
// 380ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int o = 0; o < n; o++) {
    string s;
    cin >> s;
    list<char> r;
    auto t = r.begin();
    for (auto e : s) {
      if (e == '<') {
        if (t != r.begin())
          t--;
        continue;
      }
      if (e == '>') {
        if (t != r.end())
          t++;
        continue;
      }
      if (e == '-') {
        if (t != r.begin())
          t = r.erase(--t);
        continue;
      }
      r.insert(t, e);
    }
    for (auto e : r) {
      cout << e;
    }
    cout << '\n';
  }
}