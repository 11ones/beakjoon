// 2024년 7월 3일 23:02:51
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  auto t = max_element(v.begin() + 1, v.end() - 1);
  cout << max(*t + min(*(t - 1), *(t + 1)), max(v.front(), v.back()));
}