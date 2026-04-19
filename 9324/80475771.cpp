// 2024년 7월 3일 22:54:09
// 맞았습니다!!
// 2272KB
// 168ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int o = 0; o < t; o++) {
    int arr[26] = {};
    string s;
    cin >> s;
    bool chk = 1;
    for(int i = 0; i < s.size(); i++) {
      arr[s[i] - 'A']++;
      if(arr[s[i] - 'A'] == 3) {
        if(i == s.size() - 1 || s[i + 1] != s[i]) {
          chk = 0;
        } else {
          arr[s[i] - 'A'] = 0;
          i++;
        }
      }
    }
    cout << (chk ? "OK" : "FAKE") << '\n';
  }
}