// 2024년 1월 9일 23:03:00
// 틀렸습니다
// KB
// ms
#include <iostream>

using namespace std;

int n, mx = 0;
int arr[100][100];
bool safe[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void area(int y, int x);

void water() {
  for (int i = 1; i <= 100; i++) {
    int c = 0;
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        safe[j][k] = false;
      }
    }
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (arr[j][k] > i) {
          safe[j][k] = true;
        }
      }
    }
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (safe[j][k]) {
          safe[j][k] = false;
          area(j, k);
          c++;
        }
      }
    }
    if (mx < c) {
      mx = c;
    }
  }
}

void area(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= n || ty < 0 || ty >= n || !safe[ty][tx]) {
      continue;
    }
    safe[ty][tx] = false;
    area(ty, tx);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  water();
  cout << mx;
}