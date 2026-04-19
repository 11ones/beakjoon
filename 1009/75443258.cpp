// 2024년 3월 21일 23:04:27
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;
int arr[10][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {2, 4, 8, 6}, {3, 9, 7, 1},
                  {4, 6, 4, 6}, {5, 5, 5, 5}, {6, 6, 6, 6}, {7, 9, 3, 1},
                  {8, 6, 8, 6}, {9, 1, 9, 1}};
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    cout << arr[(a + 9) % 10 + 1][(b - 1) % 4] << "\n";
  }
}