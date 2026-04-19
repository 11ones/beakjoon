// 2024년 1월 20일 16:16:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int main() {
  int arr[4];
  char a, b;
  for (int i = 0; i < 4; i++) {
    cin >> a >> b;
    a -= '0';
    b -= '0';
    arr[i] = a * 10 + b;
    if (i % 2 == 0) {
      cin >> a;
    }
  }
  arr[0] = arr[2] + 23 - arr[0] + (arr[3] + (60 - arr[1])) / 60;
  arr[1] = (arr[3] + (60 - arr[1]) % 60) % 60;
  (arr[0] / 10 == 0) ? cout << "0" : cout << "";
  cout << arr[0] << ":";
  (arr[1] / 10 == 0) ? cout << "0" : cout << "";
  cout << arr[1];
}