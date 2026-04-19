// 2024년 6월 16일 17:46:13
// 맞았습니다!!
// 2152KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w;
  cin >> h >> w;
  int **arr = new int *[h];
  for (int i = 0; i < h; i++) {
    arr[i] = new int[w]{};
  }
  char c;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c;
      arr[i][j] = c;
      if (arr[i][j] == 'c') {
        arr[i][j] = -2;
      } else {
        arr[i][j] = -3;
      }
    }
  }
  for (int i = 0; i < h; i++) {
    if (arr[i][0] == -2) {
      arr[i][0] = 0;
    } else {
      arr[i][0] = -1;
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 1; j < w; j++) {
      if (arr[i][j] == -2) {
        arr[i][j] = 0;
      } else {
        if (arr[i][j - 1] == -1) {
          arr[i][j] = -1;
        } else {
          arr[i][j] = arr[i][j - 1] + 1;
        }
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}