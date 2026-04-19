// 2024년 1월 12일 22:18:24
// 출력 형식이 잘못되었습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    for (int j = i * 2; j < 2 * n; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    for (int j = i * 2; j < 2 * n; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}