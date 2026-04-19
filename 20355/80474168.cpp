// 2024년 7월 3일 22:29:49
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;
  int arr[26] = {};
  for(auto e : s) {
    arr[e - 'a']++;
  }
  int cnt = 0;
  for(int i = 0; i < 26; i++) {
    if(!arr[i]) cnt++;
  }
  cnt == 0 ? cout << "impossible" : cout << cnt;
}