// 2024년 2월 28일 23:10:48
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

string s, c4;
int l, cl;
int find(int p, int d) {
  vector<int> v;
  int vl = 0;
  while (p < l) {
    if (c4[vl] != s[p]) {
      p = find(p + 1, d + 1);
    }
    while (c4[vl] == s[p]) {
      v.push_back(p);
      vl++;
      p++;
      if (vl == cl) {
        for (auto e : v) {
          s[e] = '*';
        }
        if (d != 0) {
          return p;
        }
        v.clear();
        vl = 0;
        break;
      }
    }
    p = find(p, d + 1);
  }
  return p;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> s >> c4;
  l = s.size();
  cl = c4.size();
  find(0, 0);
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