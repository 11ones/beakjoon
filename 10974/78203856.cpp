// 2024년 5월 11일 23:14:04
// 맞았습니다!!
// 2020KB
// 28ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 1; i <= n; i++) {
    v[i - 1] = i;
  }
  do {
    for(auto e : v) {
      cout << e << " ";
    }
    cout << '\n';
  } while (next_permutation(v.begin(), v.end()));
}