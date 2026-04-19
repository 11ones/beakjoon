// 2024년 8월 24일 20:51:35
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  array<int, 26> a{};
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    a[s[0] - 'a']++;
  }
  bool chk = 1;
  for(int i = 0; i < 26; i++) {
    if(a[i] > 4) {
      chk = 0;
      cout << (char)('a' + i);
    }
  }
  if(chk) {
    cout << "PREDAJA";
  }
}