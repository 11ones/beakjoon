// 2024년 5월 17일 23:34:02
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v[1000];
string s1, s2, s;
int l1, l2, l;

bool find(int y, int x, int d) {
  if (d == l) {
    cout << s;
    return 1;
  }
  for (auto e : v[d]) {
    if (y < e.first && x < e.second) {
      s += s1[e.first];
      bool t = find(e.first, e.second, d + 1);
      if (t) {
        return 1;
      }
      s.pop_back();
    }
  }
  return 0;
}

int main() {
  cin >> s1 >> s2;
  l1 = s1.length(), l2 = s2.length();

  int **len = new int *[l1 + 1];
  for (int i = 0; i <= l1; i++) {
    len[i] = new int[l2 + 1]{};
  }
  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < l2; j++) {
      if (s1[i] == s2[j]) {
        len[i + 1][j + 1] = len[i][j] + 1;
        v[len[i][j]].push_back({i, j});
        continue;
      }
      len[i + 1][j + 1] = max(len[i + 1][j], len[i][j + 1]);
    }
  }
  l = len[l1][l2];
  cout << l << '\n';

  if (l != 0) {
    find(-1, -1, 0);
  }
}