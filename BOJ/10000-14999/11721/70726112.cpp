// 2023년 12월 25일 18:28:37
// 출력 형식이 잘못되었습니다
// KB
// ms
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  for(int i = 0;i < s.length(); i++) {
    if(i % 10 == 0) cout << '\n';
    cout << s[i];
  }
}