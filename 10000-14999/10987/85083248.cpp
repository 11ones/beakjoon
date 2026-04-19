// 2024년 10월 12일 00:11:03
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int cnt = 0;
  for (auto e : s) {
    switch (e) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      cnt++;
    }
  }
  cout << cnt;
}