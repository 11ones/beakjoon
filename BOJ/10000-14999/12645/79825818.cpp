// 2024년 6월 19일 22:25:53
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string x;
    cin >> x;
    next_permutation(x.begin(), x.end())
    cout << "Case #" << i << ": " << x << '\n';
  }
}