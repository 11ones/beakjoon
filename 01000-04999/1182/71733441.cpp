// 2024년 1월 14일 22:41:15
// 맞았습니다!!
// 2208KB
// 56ms
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s, c = 0;
  cin >> n >> s;
  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  const int size = pow(2, n);
  for (int i = 1; i < size; i++) {
    int sum = 0;
    int tmp = i;
    int p = 0;
    while (tmp != 0) {
      if (tmp % 2 == 1) {
        sum += arr[p];
      }
      p++;
      tmp >>= 1;
    }
    if (s == sum) {
      c++;
    }
  }
  cout << c;
}
