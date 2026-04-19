// 2024년 10월 3일 14:43:11
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  int n, t, x, y, f;
  cin >> a >> b >> n >> t;
  x = stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
  y = stoi(b.substr(0, 2)) * 60 + stoi(b.substr(3, 2));
  f = y - x;
  cout << ++n / ((f - 1) / t) << '\n';
  f = x + n % ((f - 1) / t) * t;
  cout << setw(2) << setfill('0') << f / 60 << ":" << setw(2) << setfill('0') << f % 60;
}