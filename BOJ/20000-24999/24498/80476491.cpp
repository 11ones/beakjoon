// 2024년 7월 3일 23:05:02
// 맞았습니다!!
// 5928KB
// 112ms
#include <iostream>
#include <vector>
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
  int mx = max(v.front(), v.back());
  for(int i = 1; i < n - 1; i++) {
    mx = max(mx, v[i] + min(v[i - 1], v[i + 1]));
  }
  cout << mx;
}