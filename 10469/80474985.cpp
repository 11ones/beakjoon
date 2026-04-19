// 2024년 7월 3일 22:41:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<pair<char, char>> v;
  char x;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> x;
      if (x == '*') {
        v.push_back({i, j});
      }
    }
  }
  bool val = 1;
  for (int i = 0; i < 7; i++) {
    for (int j = i + 1; j < 8; j++) {
      int fi = v[i].first, fj = v[j].first;
      int si = v[i].second, sj = v[j].second;
      if (fi == fj || si == sj || abs(fi - fj) == abs(si - sj)) {
        val = 0;
      }
    }
  }
  cout << (val ? "valid" : "invalid");
}