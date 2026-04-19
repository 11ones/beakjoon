// 2024년 5월 10일 03:46:00
// 맞았습니다!!
// 21552KB
// 1076ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << v[k - 1];
}