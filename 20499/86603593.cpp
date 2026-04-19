// 2024년 11월 18일 23:59:05
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v{0};
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '/') {
      v.push_back(0);
    } else {
      v.back() = v.back() * 10 + s[i] - '0';
    }
  }
  cout << (v[0] + v[2] < v[1] || !v[1] ? "hasu" : "gosu");
}