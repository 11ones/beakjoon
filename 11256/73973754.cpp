// 2024년 2월 25일 15:35:56
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int j, n, a, b;
    vector<int> v;
    cin >> j >> n;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      v.push_back(a * b);
    }
    sort(v.begin(), v.end(), greater<>());
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
      sum += v[i];
      if (sum >= j) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
}