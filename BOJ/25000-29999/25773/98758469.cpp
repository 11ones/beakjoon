// 2025년 9월 21일 23:54:43
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end(), greater<>());
  cout << s;
}