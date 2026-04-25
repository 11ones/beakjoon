// 2024년 6월 5일 22:51:47
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {

  int n, l, cnt = 0;
  cin >> n >> l;
  vvi v;
  for (int i = 0; i < n; i++) {
    vi iv(n);
    v.push_back(iv);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    bool chk = 0;
    int x = 1;
    int t = v[i][0];
    vector<int> vst(n);
    while (1) {
      if (chk)
        break;
      if (x == n) {
        cnt++;
        break;
      }
      if (v[i][x] == t) {
        x++;
        continue;
      }
      if (v[i][x] == t + 1) {
        int tx = x;
        for (int o = l; o > 0; o--) {
          tx--;
          if (tx < 0 || v[i][tx] != t || vst[tx]) {
            chk = 1;
            break;
          }
          vst[tx] = 1;
        }
        if (chk)
          break;
        t++;
        continue;
      }
      if (v[i][x] == t - 1) {
        for (int o = 0; o < l; o++) {
          if (x >= n || v[i][x] != t - 1 || vst[x]) {
            chk = 1;
            break;
          }
          vst[x] = 1;
          x++;
        }
        if (chk)
          break;
        t--;
        continue;
      }
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    bool chk = 0;
    int x = 1;
    int t = v[0][i];
    vector<int> vst(n);
    while (1) {
      if (chk) {
        break;
      }
      if (x == n) {
        cnt++;
        break;
      }
      if (v[x][i] == t) {
        x++;
        continue;
      }
      if (v[x][i] == t + 1) {
        int tx = x;
        for (int o = l; o > 0; o--) {
          tx--;
          if (tx < 0 || v[tx][i] != t || vst[tx]) {
            chk = 1;
            break;
          }
          vst[tx] = 1;
        }
        if (chk)
          break;
        t++;
        continue;
      }
      if (v[x][i] == t - 1) {
        for (int o = 0; o < l; o++) {
          if (x >= n || v[x][i] != t - 1 || vst[x]) {
            chk = 1;
            break;
          }
          vst[x] = 1;
          x++;
        }
        if (chk)
          break;
        t--;
        continue;
      }
      break;
    }
  }
  cout << cnt;
}