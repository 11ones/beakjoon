// 2024년 4월 5일 22:54:22
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end(), greater<>());
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (v[i]) * (i + 1);
  }
  if (n > 1)
    sum -= v[n - 1];
  cout << sum;
}