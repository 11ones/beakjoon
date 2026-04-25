// 2025년 1월 25일 19:50:55
// 15점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char c;
  string s;
  while (cin >> c) {
    if (c >= '0' && c <= '9')
      s += c;
    else {
      if(s != "") {
        cout << " " << s << '\n';
        s = "";
      }
      if (c == '+')
        cout << " tighten";
      else if (c == '-')
        cout << " loosen";
      else
        cout << c;
    }
  }
  cout << " " << s;
}