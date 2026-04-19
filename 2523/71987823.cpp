// 2024년 1월 18일 23:54:56
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
  for(int i = 1; i < n; i++) {
    for(int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << '\n';
  }
  for(int i = n; i > 0; i--) {
    for(int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << '\n';    
  }
}