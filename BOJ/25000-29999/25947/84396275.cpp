// 2024년 9월 26일 23:21:18
// 맞았습니다!!
// 2412KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, b, a, t = 0;
  cin >> n >> b >> a;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < a; i++) {
    t += v[i] / 2;
    if (t > b) {
      cout << i;
      return 0;
    }
  }
  for (int i = a; i < n; i++) {
    t += v[i] / 2 + v[i - a] / 2;
    if (t > b) {
      cout << i;
      return 0;
    }
  }
  cout << n;
}