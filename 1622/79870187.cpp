// 2024년 6월 20일 23:25:35
// 맞았습니다!!
// 2024KB
// 8ms
#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  while (getline(cin, s1), getline(cin, s2)) {
    if (s1.length() != 0 && s2.length() != 0) {
      int arr1[26] = {}, arr2[26] = {};
      for (auto e : s1) {
        arr1[e - 'a']++;
      }
      for (auto e : s2) {
        arr2[e - 'a']++;
      }
      for (int i = 0; i < 26; i++) {
        int x = min(arr1[i], arr2[i]);
        for (int j = 0; j < x; j++) {
          cout << (char)(i + 'a');
        }
      }
    }
    cout << '\n';
  }
}