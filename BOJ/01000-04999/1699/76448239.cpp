// 2024년 4월 6일 11:59:51
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *d = new int[n + 1]{};
  fill(&d[0], &d[n + 1], 1'000'000);
  vector<int> v;
  int c = 0;
  for (int i = 1; i * i <= n; i++) {
    v.push_back(i * i);
    d[i * i] = 1;
    c++;
  }
  int t = 0;
  while (c < n) {
    t++;
    for (int i = 1; i <= n; i++) {
      if (d[i] == t) {
        for (auto e : v) {
          if (i + e > n) {
            break;
          }
          if (t + 1 < d[i + e]) {
            d[i + e] = t + 1;
            c++;
          }
        }
      }
      if(d[n] != 1'000'000) {
        break;
      }
    }
  }
   cout << d[n];
}