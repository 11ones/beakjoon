// 2023년 12월 25일 17:53:25
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
  for(int i = 0; i < x; i++) {
    for(int j = 0; j < x; j++) {
      if(j >= i) cout << "*";
      else cout << " ";
    }
    cout << '\n';
  }
}