// 2024년 10월 22일 00:20:27
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore(100, '\n');
  for (int i = 1; i <= n; i++) {
    string s;
    getline(cin, s);
    cout << i << ". " << s << '\n';
  }
}