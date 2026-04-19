// 2024년 6월 20일 23:01:48
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2, ts2;
  while (1) {
    cin >> s1;
    if (s1 == "#") {
      return 0;
    }
    cin >> s2;
    ts2 = s2;
    int b = 0, g = 0, l = s2.length();
    for (int i = 0; i < l; i++) {
      if (s1[i] == s2[i]) {
        b++;
        s1[i] = '0';
        s2[i] = '0';
        continue;
      }
    }
    for (int i = 0; i < l; i++) {
      if(s2[i] == '0') {
        continue;
      }
      if (i != 0 && s1[i - 1] == s2[i]) {
        g++;
        s1[i - 1] = '0';
        s2[i] = '0';
        continue;
      }
      if (i != l - 1 && s1[i + 1] == s2[i]) {
        g++;
        s1[i + 1] = '0';
        s2[i] = '0';
        continue;
      }
    }
    int arr1[26] = {}, arr2[26] = {}, sum = 0;
    for (int i = 0; i < l; i++) {
      if (s1[i] != '0') {
        arr1[s1[i] - 'A']++;
      }
      if (s2[i] != '0') {
        arr2[s2[i] - 'A']++;
      }
    }

    for (int i = 0; i < 26; i++) {
      sum += min(arr1[i], arr2[i]);
    }
    cout << ts2 << ": " << b << " black, " << g << " grey, " << sum
         << " white\n";
  }
}