// 2024년 5월 27일 23:03:50
// 시간 초과
// KB
// ms
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

int arr[100001][5][5];
vector<int> v{0};
int l, mn = 1e7;

int c(int a, int b) {
  if (a == b)
    return 1;
  if (a == 0)
    return 2;
  if ((a + b) % 2 == 1)
    return 3;
  return 4;
}

void run(int d, int a, int b) {
  if (d == l) {
    mn = min(mn, arr[d - 1][a][b]);
    return;
  }
  if(mn < arr[d - 1][a][b] + c(b, v[d]) || mn < arr[d - 1][a][b] + c(a, v[d])) {
    return;
  }
  
  if (arr[d][a][v[d]] == 0 ||
      arr[d][a][v[d]] > arr[d - 1][a][b] + c(b, v[d])) {
    arr[d][a][v[d]] = arr[d - 1][a][b] + c(b, v[d]);
    run(d + 1, a, v[d]);
  }
  if (arr[d][v[d]][b] == 0 ||
      arr[d][v[d]][b] > arr[d - 1][a][b] + c(a, v[d])) {
    arr[d][v[d]][b] = arr[d - 1][a][b] + c(a, v[d]);
    run(d + 1, v[d], b);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  while(1) {
    int x;
    cin >> x;
    if (x == 0) {
      break;
    }
    v.push_back(x);
  }
  l = v.size();
  arr[0][0][0] = 1;
  run(1, 0, 0);

  cout << (mn == 1e7 ? 0 : mn - 1);
}