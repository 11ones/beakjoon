// 2024년 10월 30일 22:17:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n, s = 0;
    cin >> n;
    if(n == -1) return 0;
    vector<pair<int, int>> v(n + 1);
    for(int i = 1; i <= n; i++) {
      cin >> v[i].first >> v[i].second;
    }
    for(int i = 1; i <= n; i++) {
      s += v[i].first * (v[i].second - v[i - 1].second);
    }
    cout << s << " miles\n";
  }
}