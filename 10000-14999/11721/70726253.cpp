// 2023년 12월 25일 18:34:06
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (i > 0 && i % 10 == 0)
      cout << '\n';
    cout << s[i];
  }
}