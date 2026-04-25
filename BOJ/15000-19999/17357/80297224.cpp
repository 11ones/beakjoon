// 2024년 6월 30일 16:55:24
// 맞았습니다!!
// 2020KB
// 336ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> v(n + 1), s(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    s[i] = v[i] + s[i - 1];
  }
  for (int o = 1; o <= n; o++) {
    __int128 mx = -1;
    int mxp;
    for (int i = 1; i + o - 1 <= n; i++) {
      __int128 sum = 0;
      __int128 m = (s[i + o - 1] - s[i - 1]);
      for (int j = 0; j < o; j++) {
        sum += (v[i + j] * o - m) * (v[i + j] * o - m);
      }
      if (mx < sum) {
        mx = sum;
        mxp = i;
      }
    }
    cout << mxp << '\n';
  }
}