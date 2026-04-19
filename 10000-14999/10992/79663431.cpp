// 2024년 6월 15일 21:11:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 1; i < n; i++) {
    for(int j = i; j < n; j++) {
      cout << " ";
    }
    cout << "*";
    if(i != 1) {
      for(int j = 3; j < i * 2; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << '\n';
  }
  for(int i = 1; i < n * 2; i++) {
    cout << "*";
  }
}
