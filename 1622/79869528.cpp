// 2024년 6월 20일 23:11:25
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2, ts2;
  cin >> s1 >> s2;
  while (!cin.eof()) {
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
    cin >> s1 >> s2;
  }
}