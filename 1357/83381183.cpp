// 2024년 9월 3일 20:33:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, s;
  int c = 0;
  cin >> a >> b;
  int ml = max(a.length(), b.length());
  while (a.length() < ml) {
    a.push_back('0');
  }
  while (b.length() < ml) {
    b.push_back('0');
  }
  cout << a << " " << b << '\n';
  for (int i = 0; i < ml; i++) {
    s.push_back((a[i] + b[i] - 2 * '0' + c) % 10 + '0');
    c = (a[i] + b[i] - 2 * '0' + c) / 10;
  }
  if(c) {
    s.push_back('1');
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '0') {
      cout << s[i];
    }
  }
}