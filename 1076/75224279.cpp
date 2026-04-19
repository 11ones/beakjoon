// 2024년 3월 18일 23:39:37
// 맞았습니다!!
// 2032KB
// 0ms
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> m = {{"black", 0},  {"brown", 1}, {"red", 2},  {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8},   {"white", 9}};
  string s1, s2, ans = "";
  cin >> s1 >> s2;
  ans += to_string(m[s1] * 10 + m[s2]);
  cin >> s1;
  if(ans == "0") {
    cout << 0;
  } else {
    for (int i = 0; i < m[s1]; i++) {
     ans += "0";
    }
  cout << ans;
  }
}