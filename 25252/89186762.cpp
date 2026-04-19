// 2025년 1월 26일 16:01:01
// 맞았습니다!!
// 3584KB
// 40ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, s1, s2, c = 0, f, b;
  cin >> n >> s1 >> s2;
  vector<int> v(n + 1);
  for (int i = 0; i < s1; i++) {
    cin >> v[i];
    if (!v[i]) f = i - 1, b = i + 1;
  }
  for (int i = n; i > n - s2; i--) {
    cin >> v[i];
    if (!v[i]) f = i - 1, b = i + 1;
  }
  for (int i = 1; i <= n; i++) {
    if (i == v[f]) {
      c++;
      while (--f >= 0 && v[f] < i);
    }
    if (i == v[b]) {
      c++;
      while (++b < n && v[b] < i);
    }
  }
  cout << c;
}