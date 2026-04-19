// 2024년 2월 29일 23:53:27
// 맞았습니다!!
// 42056KB
// 100ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, c4;
  int l, cl, p = -1, d = 0;
  cin >> s >> c4;
  vector<int> v[1000000]{};
  l = s.size();
  cl = c4.size();
  if (cl == 1) {
    while (p++ < l) {
      if (c4[0] == s[p - 1]) {
        s[p - 1] = '*';
      }
    }
  } else {
    while (p++ < l) {
      if (c4[0] == s[p - 1]) {
        v[++d].push_back(p - 1);
        continue;
      }
      if (v[d].empty()) {
        continue;
      }
      if (c4[v[d].size()] != s[p - 1]) {
        v[d].clear();
        continue;
      }
      v[d].push_back(p - 1);
      if (v[d].size() == cl) {
        for (auto e : v[d]) {
          s[e] = '*';
        }
        v[d--].clear();
        continue;
      }
    }
  }
  int x = 0;
  for (auto e : s) {
    if (e != '*') {
      cout << e;
    } else {
      x++;
    }
  }
  if (x == l) {
    cout << "FRULA";
  }
}