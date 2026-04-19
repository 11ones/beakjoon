// 2024년 6월 30일 14:20:57
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, b;
  cin >> n >> b;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<>());
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += v[i];
    if(sum >= b) {
      cout << i + 1;
      return 0;
    }
  }
}