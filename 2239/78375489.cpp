// 2024년 5월 15일 18:14:25
// 맞았습니다!!
// 2024KB
// 300ms
#include <iostream>
#include <vector>
using namespace std;

int arr[9][9];
vector<pair<int, int>> v;

int run(int x) {
  int vy = v[x].first;
  int vx = v[x].second;
  for(int i = 1; i <= 9; i++) {
    bool chk = 0;
    for(int j = 0; j < 9; j++) {
      if(arr[vy][j] == i || arr[j][vx] == i) {
        chk = 1;
        break;
      }
    }
    if(chk) {
      continue;
    }
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        if(arr[vy / 3 * 3 + j][vx / 3 * 3 + k] == i) {
          chk = 1;
          break;
        }
      }
      if(chk) {
        break;
      }
    }
    if(chk) {
      continue;
    }
    arr[vy][vx] = i;
    if(x == v.size() - 1) {
      return 1;
    }
    int t = run(x + 1);
    if(t) {
      return 1;
    }
    arr[vy][vx] = 0;
  }
  return 0;
}

int main() {
  string s;
  for(int i = 0; i < 9; i++) {
    cin >> s;
    for(int j = 0; j < 9; j++) {
      arr[i][j] = s[j] - '0';
      if(arr[i][j] == 0) {
        v.push_back({i, j});
      }
    }
  }
  run(0);
  
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      cout << arr[i][j];
    }
    cout << '\n';
  }
}