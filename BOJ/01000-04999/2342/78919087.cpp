// 2024년 5월 27일 23:14:36
// 맞았습니다!!
// 20116KB
// 32ms
#include <iostream>
#include <vector>
using namespace std;

int arr[100001][5][5];
vector<int> v;
int l;

int c(int a, int b) {
  if (a == b)
    return 1;
  if (a == 0)
    return 2;
  if ((a + b) % 2 == 1)
    return 3;
  return 4;
}

int run(int d, int a, int b) {
  if (d == l) {
    return 0;
  }
  if (arr[d][a][b] != 0) {
    return arr[d][a][b];
  }
  return arr[d][a][b] = min(run(d + 1, a, v[d]) + c(b, v[d]), run(d + 1, v[d], b) + c(a, v[d]));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (1) {
    int x;
    cin >> x;
    if (x == 0) {
      break;
    }
    v.push_back(x);
  }
  l = v.size();

  cout << run(0, 0, 0);
}