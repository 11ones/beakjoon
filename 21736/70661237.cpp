// 2023년 12월 23일 16:02:46
// 맞았습니다!!
// 13848KB
// 16ms
#include <iostream>
using namespace std;

int n, m, p = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
char arr[600][600];
bool visit[600][600];

void find(int x, int y) {
  visit[y][x] = 1;
  if(arr[y][x] == 'P') {
    p++;
  }
  for(int i = 0; i < 4; i++) {
    int tx = x + dx[i], ty = y + dy[i];
    if(tx < 0 || tx >= m || ty < 0 || ty >= n
      || visit[ty][tx] == 1) {
      continue;
    }
    if(arr[ty][tx] == 'X') {
      visit[ty][tx] = 1;
      continue;
    }
    find(tx, ty);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if(arr[i][j] == 'I') {
        x = j;
        y = i;
      }
    }
  }
  find(x, y);
  if(p == 0) 
    cout << "TT";
  else  
    cout << p;
}