// 2026년 2월 8일 19:06:17
// 맞았습니다!!
// 3684KB
// 20ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int S, P, c = 0;
  string s;
  vector<int> A(4), v(5);
  map<char, int> m = {{'A', 1}, {'C', 2}, {'G', 3}, {'T', 4}};
  cin >> S >> P >> s;
  s += 'X';
  for(auto &e : A) cin >> e;
  for(int i = 0; i < P; ++i) {
    ++v[m[s[i]]];
  }
  for(int i = P; i <= S; ++i) {
    for(int j = 0; j < 4; ++j) {
      if(A[j] > v[j + 1]) goto E;
    }
    ++c;
    E:
    ++v[m[s[i]]], --v[m[s[i - P]]];
  }
  cout << c;
}