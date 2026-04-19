// 2024년 3월 20일 22:31:56
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
  int b, c;
  long long cnt = 0;
  cin >> b >> c;
  if (b > c) {
    cnt += (v[0] - b < 0) ? 1 : 1 + (v[0] - b) / c + ((v[0] - b) % c != 0);
    for (int i = 1; i < n; i++) {
      cnt += v[i] / c + (v[i] % c != 0);
    }
  } else {
    for (int i = 0; i < n; i++) {
      cnt += v[i] / c + (v[i] % c != 0);
    }
  }
  cout << cnt;
}