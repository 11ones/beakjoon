// 2024년 9월 2일 20:44:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while(1) {
    int m, f;
    cin >> m >> f;
    if(!m && !f) {
      return 0;
    }
    cout << m + f << '\n';
  }
}