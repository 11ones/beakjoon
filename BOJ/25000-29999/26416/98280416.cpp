// 2025년 9월 8일 17:37:36
// 10점
// 2024KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for(int i = 1; i <= T; ++i) {
    int N;
    string s;
    cin >> N >> s;
    vector<bool> v(4);
    for(auto e : s) {
      if('a' <= e && e <= 'z') v[0] = 1;
      else if('A' <= e && e <= 'Z') v[1] = 1;
      else if('0' <= e && e <= '9') v[2] = 1;
      else v[3] = 1;
    }
    if(!v[0]) s += 'a';
    if(!v[1]) s += 'A';
    if(!v[2]) s += '0';
    if(!v[3]) s += '#';
    while(s.length() < 7) s += 'a';
    cout << "Case #" << i << ": " << s << "\n";
  }
}