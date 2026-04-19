// 2025년 5월 27일 15:42:13
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<vector<char>> v(5, vector<char>(s.size() * 4 + 1, '.'));
  array<char, 3> f = {'#', '#', '*'};
  array<int, 7> dx = {1, 2, 3, 4, 3, 2, 1};
  array<int, 7> dy = {1, 0, 1, 2, 3, 4, 3};
  v[2][0] = '#';
  for (int i = 0; i < s.size(); ++i) {
    int px = i * 4;
    v[2][px + 2] = s[i];
    if(i % 3 == 2) v[2][px] = '*';
    for(int j = 0; j < 7; ++j) {
      v[dy[j]][px + dx[j]] = f[i % 3];
    }
  }
  for(auto e : v) {
    for(auto d : e) {
      cout << d;
    }
    cout << '\n';
  }
}