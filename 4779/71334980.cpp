// 2024년 1월 7일 22:45:14
// 맞았습니다!!
// 2208KB
// 108ms
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

  while (1) {
    int n;
    cin >> n;
    if(cin.eof())
        break;
    cantor(n);
    cout << '\n';
  }
}