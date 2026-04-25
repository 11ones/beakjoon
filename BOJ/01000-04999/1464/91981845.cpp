// 2025년 3월 25일 15:01:25
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  for(auto e : s) {
    if(e > t[0]) {
      t += e;
    } else {
      t = e + t;
    }
  }
  cout << t;
}