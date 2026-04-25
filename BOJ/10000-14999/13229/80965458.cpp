// 2024년 7월 13일 13:00:15
// 맞았습니다!!
// 2412KB
// 8ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  vector<int> v(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    cout << v[b + 1] - v[a] << '\n';
  }
}