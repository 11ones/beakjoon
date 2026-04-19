// 2023년 11월 3일 11:01:07
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int dist;
  int a, b;
  int fst;
  for (int i = 0; i < n - 1; i++) {
    if (i == 0) {
      cin >> a >> b;
      fst = a;
      dist = b - a;
      continue;
    }
    a = b;
    cin >> b;
    int dtmp = b - a;
    while (dtmp != 0) {
      int tmp = dtmp;
      dtmp = dist % dtmp;
      dist = tmp;
    }
    if (dist == 1)
      break;
  }
  cout << (b - fst) / dist - n + 1;
}