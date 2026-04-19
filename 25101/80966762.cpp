// 2024년 7월 13일 13:41:43
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(int i = 0; i < k; i++) {
    auto t = max_element(v.begin(), v.end());
    if(*t > 100) {
      *t -= 100;
      continue;
    }
    cout << "impossible";
    return 0;
  }
  for(auto e : v) {
    cout << e << ' ';
  }
}