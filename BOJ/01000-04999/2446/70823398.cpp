// 2023년 12월 27일 23:16:34
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    for(int i = x; i > 0; i--) {
      for(int j = i; j < x; j++) {
        cout << " ";
      }
      for(int j = i * 2 - 1; j > 0; j--) {
        cout << "*";
      }
      cout << '\n';
    }  
  for(int i = 2; i <= x; i++) {
    for(int j = i; j < x; j++) {
      cout << " ";
    }
    for(int j = i * 2 - 1; j > 0; j--) {
      cout << "*";
    }
    cout << '\n';
  }
}