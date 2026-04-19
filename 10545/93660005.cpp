// 2025년 4월 28일 13:37:34
// 맞았습니다!!
// 2028KB
// 0ms
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[10], t;
  for(int i = 1; i <= 9; ++i) {
    cin >> t;
    a[t] = i;
  }
  t = 0;
  map<char, array<int, 2>> m;
  for(char i = 'a'; i < 'p'; ++i) {
    m[i] = {(i - 'a') / 3 + 2, (i - 'a') % 3 + 1};
  }
  for(char i = 'p'; i < 't'; ++i) {
    m[i] = {7, (i - 'p') % 4 + 1};
    m[i + 7] = {9, (i - 'p') % 4 + 1};
  }
  for(char i = 't'; i < 'w'; ++i) {
    m[i] = {8, (i - 't') % 4 + 1};
  }
  string s;
  cin >> s;
  for(auto e : s) {
    if(t == m[e][0]) cout << "#";
    for(int i = 0; i < m[e][1]; ++i) {
      cout << a[m[e][0]];
    }
    t = m[e][0];
  }
}