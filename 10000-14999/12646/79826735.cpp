// 2024년 6월 19일 22:46:44
// 맞았습니다!!
// 2028KB
// 16ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string x;
    cin >> x;
    if (!next_permutation(x.begin(), x.end())) {
      sort(x.begin(), x.end());
      int t = upper_bound(x.begin(), x.end(), '0') - x.begin();
      string s;
      for (int o = 0; o <= t; o++) {
        s += "0";
      }
      x = to_string(x[t] - '0') + s + x.substr(t + 1);
    }
    cout << "Case #" << i << ": " << x << '\n';
  }
}