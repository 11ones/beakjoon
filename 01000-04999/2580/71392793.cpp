// 2024년 1월 8일 23:10:26
// 맞았습니다!!
// 2020KB
// 304ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> p;

int arr[9][9];
vector<p> v;

bool sdk(int t) {

  if (t >= v.size()) {
    return 1;
  } 
  for (int i = 1; i <= 9; i++) {
    bool check = 0;
    for (int j = 0; j < 9; j++) {
      if (arr[v[t].first][j] == i || arr[j][v[t].second] == i) {
        check = 1;
        break;
      }
    }
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (arr[v[t].first / 3 * 3 + j][v[t].second / 3 * 3 +k] == i) {
          check = 1;
          break;
        }
      }
    }
    if (check == 0) {
      arr[v[t].first][v[t].second] = i;
      if(sdk(t + 1)) {
        return 1;
      }
      arr[v[t].first][v[t].second] = 0;
    }
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 0) {
        v.push_back({i, j});
      }
    }
  }

  sdk(0);

  cout << '\n';
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}