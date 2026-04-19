// 2024년 12월 21일 00:09:59
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  if(m == 1 || m == 2) {
    cout << "NEWBIE!";
    return 0;
  }
  if(m <= n) {
    cout << "OLDBIE!";
    return 0;
  }
  cout << "TLE!";
}