// 2025년 5월 21일 21:07:40
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x;
  cin >> N;
  vector<long> m(21);
  cin >> x;
  ++m[x];
  for(int i = 1; i < N - 1; ++i) {
    vector<long> t(21);
    cin >> x;
    for(int j = 0; j <= 20; ++j) {
      if(j - x >= 0) t[j - x] += m[j];
      if(j + x <= 20) t[j + x] += m[j];
    }
    m = t;
  }
  cin >> x;
  cout << m[x];
}