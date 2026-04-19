// 2024년 1월 11일 07:37:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = i * 2; j < 2 * n - 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}