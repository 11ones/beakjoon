// 2024년 10월 30일 00:09:59
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    for(auto e : s) {
      cout << tolower(e);
    }
    cout << '\n';
  }
}