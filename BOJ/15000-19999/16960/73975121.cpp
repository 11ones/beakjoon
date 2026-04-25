// 2024년 2월 25일 16:02:59
// 맞았습니다!!
// 2288KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<int> *v = new vector<int>[n];
  vector<int> t;
  int *arr = new int[m + 1];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      int y;
      cin >> y;
      v[i].push_back(y);
      arr[y]++;
    }
  }
  for (int i = 1; i <= m; i++) {
    if (arr[i] == 1)
      t.push_back(i);
  }
  int check = 0;
  for (int i = 0; i < n; i++) {
    bool c = 0;
    for (auto e : v[i]) {
      for (auto et : t) {
        if (e == et) {
          check++;
          c = 1;
          break;
        }
      }
      if (c) {
        break;
      }
    }
  }
  if (check == n) {
    cout << 0;
  } else {
    cout << 1;
  }
}