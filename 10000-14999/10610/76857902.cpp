// 2024년 4월 12일 23:20:07
// 출력 초과
// KB
// ms
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
  bool isEven = 0, isFive = (arr[0] + arr[5] != 0);
  for (int i = 0; i < 10; i++) {
    sum += i * arr[i];
    if (i % 2 == 0 && arr[i] != 0) {
      isEven = 1;
    }
  }
  if(!(!(sum % 3) && isEven && isFive)) {
    cout << -1;
    return 0;
  }
  for(int i = 9; i >= 0; i--) {
    for(int j = 0; j < arr[i]; j++) {
      cout << i;
    }
  }
}