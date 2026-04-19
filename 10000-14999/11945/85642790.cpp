// 2024년 10월 25일 23:30:36
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  while(n--) {
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << "\n";
  }
}