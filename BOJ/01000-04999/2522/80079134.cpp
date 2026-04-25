// 2024년 6월 25일 22:27:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int j = i; j < n; j++) {
      cout << " ";
    }
    for(int j = n - i; j < n; j++) {
      cout << "*";
    }
    cout << '\n';
  }
  for(int i = n - 1; i > 0; i--) {
    for(int j = i; j < n; j++) {
      cout << " ";
    }
    for(int j = n - i; j < n; j++) {
      cout << "*";
    }
    cout << '\n';
  }
}