// 2024년 7월 11일 22:28:34
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int s = 0, n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i = (n + 1) / 2; i < n; i++) {
    s += v[i];
  }
  cout << s;
}