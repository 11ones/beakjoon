// 2024년 6월 19일 22:31:41
// 틀렸습니다
// KB
// ms
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
      x = x.substr(0, 1) + "0" + x.substr(1);
    }
    cout << "Case #" << i << ": " << x << '\n';
  }
}