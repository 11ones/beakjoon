// 2024년 6월 29일 00:15:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "*";
    for (int j = 2; j < n; j += 2) {
      cout << " *";
    }
    cout << '\n';
    for (int j = 1; j < n; j += 2) {
      cout << " *";
    }
    cout << '\n';
  }
}