// 2024년 5월 29일 00:01:07
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> v;
  for (int i = 1; i * i <= b; i++) {
    v.push_back(i * i);
  }
  int sum = 0;
  for (auto e : v) {
    if (e >= a) {
      b = min(e, b);
      sum += e;
    }
  }
  if(sum == 0) {
    cout << -1;
    return 0;
  }
  cout << sum << "\n" << b;
}