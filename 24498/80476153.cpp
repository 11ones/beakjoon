// 2024년 7월 3일 23:00:03
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  auto t = max_element(v.begin() + 1, v.end() - 1);
  cout << *t + min(*(t - 1), *(t + 1));
}