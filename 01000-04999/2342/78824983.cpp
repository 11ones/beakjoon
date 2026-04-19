// 2024년 5월 25일 18:13:56
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

int arr[100001][2][3];
int x;

int c(int a) {
  if (a == x)
    return 1;
  if (a == 0)
    return 2;
  if ((a + x) % 2 == 1)
    return 3;
  return 4;
}

int main() {
  int i = 0;
  while(1) {
    cin >> x;
    if (x == 0)
      break;
    i++;
    for (int j = 0; j <= 1; j++) {
      int *tl = arr[i - 1][0];
      int *tr = arr[i - 1][1];
      int p = (tl[0] + c(tl[1 + j]) > tr[0] + c(tr[1 + j]));
      for(int k = 0; k <= 2; k++) {
        arr[i][j][k] = arr[i - 1][p][k];
      }
      arr[i][j][0] += c(arr[i - 1][p][1 + j]);
      arr[i][j][1 + j] = x;
    }
  }
  cout << min(arr[i][0][0], arr[i][1][0]);
}