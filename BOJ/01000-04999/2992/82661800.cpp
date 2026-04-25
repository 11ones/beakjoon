// 2024년 8월 18일 22:59:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, t;
  cin >> s;
  t = s;
  next_permutation(s.begin(), s.end());
  cout << (t < s ? s : "0");
}