// 2024년 3월 18일 23:35:09
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> m = {{"black", 0},  {"brown", 1}, {"red", 2},  {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8},   {"white", 9}};
  string s, ans = "";
  cin >> s;
  ans += to_string(m[s]) * 10;
  cin >> s;
  ans += to_string(m[s]);
  cin >> s;
  for (int i = 0; i < m[s]; i++) {
    ans += "0";
  }
  cout << ans;
}