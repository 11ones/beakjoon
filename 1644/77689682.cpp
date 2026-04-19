// 2024년 4월 30일 23:45:36
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v = {2};

  for (int i = 3; i <= n; i++) {
    bool chk = 1;
    for (auto e : v) {
      if (e * e > i) {
        break;
      }
      if (!(i % e)) {
        chk = 0;
        break;
      }
    }
    if (chk) {
      v.push_back(i);
    }
  }

  int cnt = 0;
  int sum = 0;
  auto f = v.begin();
  auto b = v.begin();
  while (1) {
    while (sum < n && b < v.end()) {
      sum += *(b++);
    }
    while (sum > n && f < v.end()) {
      sum -= *(f++);
    }
    if (sum == n) {
      cnt++;
      sum += *(b++);
    }
    if(f >= v.end() || b > v.end()) {
      break;
    }
  }
  cout << cnt;
}