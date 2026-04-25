// 2026년 2월 23일 04:52:44
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<int> v(26), u(26);
  string s;
  cin >> s;
  for(auto e : s) ++v[e - 'a'];
  cin >> s;
  for(auto e : s) ++u[e - 'a'];
  int c = 0;
  for(int i = 0; i < 26; ++i) {
    c += abs(v[i] - u[i]);
  }
  cout << c;
}