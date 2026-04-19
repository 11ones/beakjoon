// 2024년 6월 19일 22:52:13
// 맞았습니다!!
// 2028KB
// 20ms
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
      x = to_string(x[t] - '0') + x.substr(0, t) + "0" + x.substr(t + 1);
    }
    cout << "Case #" << i << ": " << x << '\n';
  }
}