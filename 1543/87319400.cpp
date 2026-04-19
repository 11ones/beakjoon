// 2024년 12월 9일 22:54:51
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  for (int i = 0; i < s1.size(); i++) {
    int ti = i;
    for (auto e : s2) {
      if(e != s1[ti]) {
        goto E;
      }
      ti++;
    }
    i = --ti;
    t++;
    E:;
  }
  cout << t;
}