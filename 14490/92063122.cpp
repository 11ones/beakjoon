// 2025년 3월 26일 19:56:37
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(b) return gcd(b, a % b);
  return a;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  int a = stoi(s.substr(0, s.find(':')));
  int b = stoi(s.substr(s.find(':') + 1));
  cout << a / gcd(a, b) << ":" << b / gcd(a, b);
}