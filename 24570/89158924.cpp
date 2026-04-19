// 2025년 1월 25일 19:46:02
// 13점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char c;
  while (cin >> c) {
    if (c == '+')
      cout << " tighten";
    else if (c == '-')
      cout << " loosen";
    else if (c >= '0' && c <= '9')
      cout << " " << c << '\n';
    else
      cout << c;
  }
}