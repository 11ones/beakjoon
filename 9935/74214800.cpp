// 2024년 2월 29일 23:10:32
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>

using namespace std;

string s, c4;
int l, cl, p = 0;
void find(int d) {
  if (d == 0 && p == 0) {
    find(d + 1);
  } else if (d == 0) {
    p++;
    find(d + 1);
  } else {
    vector<int> v;
    int vl = 0;
    while (p < l) {
      if (c4[vl] != s[p]) {
        if (c4[0] == s[p]) {
          find(d + 1);
        }
      } else {
        while (c4[vl] == s[p]) {
          v.push_back(p);
          vl++;
          p++;
          if (vl == cl) {
            for (auto e : v) {
              s[e] = '*';
            }
            return;
          }
        }
        find(d + 1);
      }
    }
  }
  if(p < l) {
    find(d + 1);
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> s >> c4;
  l = s.size();
  cl = c4.size();
  find(0);
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