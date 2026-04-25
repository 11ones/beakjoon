// 2024년 5월 24일 21:28:53
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      cout << " ";
    }
    for(int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << '\n';
  }
}