// 2024년 1월 22일 23:58:31
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    (a > b) ? cout << "Yes\n" : cout << "No\n";
  }
}