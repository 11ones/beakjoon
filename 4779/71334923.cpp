// 2024년 1월 7일 22:44:15
// 틀렸습니다
// KB
// ms
#include <cmath>
#include <iostream>
using namespace std;

void cantor(int n) {
  if (n == 0) {
    cout << "-";
    return;
  }
  if (n == 1) {
    cout << "- -";
  } else {
    cantor(n - 1);
    for (int i = 0; i < pow(3, n - 1); i++) {
      cout << " ";
    }
    cantor(n - 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (!cin.eof()) {
    int n;
    cin >> n;
    cantor(n);
    cout << '\n';
  }
}