// 2023년 11월 3일 11:06:29
// 맞았습니다!!
// 2020KB
// 12ms
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
    {
      while(++i < n - 1)
      {
        cin >> b;   
      }
      break;
    }
  }
  cout << (b - fst) / dist - n + 1;
}