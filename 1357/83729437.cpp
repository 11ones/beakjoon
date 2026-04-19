// 2024년 9월 10일 23:46:59
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  a = to_string(stoi(a) + stoi(b));
  reverse(a.begin(), a.end());
  cout << stoi(a);
}