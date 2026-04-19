// 2026년 2월 23일 04:55:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  int a = 0, b = 0;
  cin >> s >> s;
  for(auto e : s) e == 'A' ? ++a : ++b;
  cout << (a > b ? "A" : a < b ? "B" : "Tie"); 
}