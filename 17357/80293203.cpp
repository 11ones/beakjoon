// 2024년 6월 30일 15:30:25
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n + 1), s(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    s[i] = v[i] + s[i - 1];
  }
  for (int o = 1; o <= n; o++) {
    int mx = -1, mxp;
    for (int i = 1; i + o - 1 <= n; i++) {
      long long sum = 0;
      long long m = (s[i + o - 1] - s[i - 1]);
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