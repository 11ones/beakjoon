// 2023년 12월 25일 18:36:57
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
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cout << " ";
    }
    for (int j = 0; j < i * 2 + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}