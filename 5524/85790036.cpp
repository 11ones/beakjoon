// 2024년 10월 30일 00:10:49
// 100점
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    for(auto e : s) {
      cout << (char)tolower(e);
    }
    cout << '\n';
  }
}