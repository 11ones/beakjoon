// 2024년 4월 14일 22:40:35
// 맞았습니다!!
// 2268KB
// 8ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int arr[10]{};
  for (auto e : s) {
    arr[e - '0']++;
  }

  int sum = 0;
  bool isTen = arr[0] != 0;
  for (int i = 0; i < 10; i++) {
    sum += i * arr[i];
  }
  if (!(!(sum % 3) && isTen)) {
    cout << -1;
    return 0;
  }
  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < arr[i]; j++) {
      cout << i;
    }
  }
}