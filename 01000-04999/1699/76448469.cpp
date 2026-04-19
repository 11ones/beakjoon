// 2024년 4월 6일 12:05:23
// 맞았습니다!!
// 2412KB
// 8ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *d = new int[n + 1]{};
  fill(&d[0], &d[n + 1], 1'000'000);
  vector<int> v;
  for (int i = 1; i * i <= n; i++) { // 제곱수 들을 v에 미리 저장하는 동시에 d에도 1을 넣어줌
    v.push_back(i * i);
    d[i * i] = 1;
  }
  int t = 0;
  while (1) {
    t++;
    for (int i = 1; i <= n; i++) {
      if (d[i] == t) {
        for (auto e : v) {
          if (i + e > n) {
            break;
          }
          if (t + 1 < d[i + e]) {
            d[i + e] = t + 1;
          }
        }
      }
      if(d[n] != 1'000'000) {
        break;
      }
    }
    if(d[n] != 1'000'000) {
      break;
    }
  }
   cout << d[n];
}