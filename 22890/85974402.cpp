// 2024년 11월 3일 16:45:57
// 12점
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  for (int o = 1; o <= T; o++) {
    int n, r = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int i = 1; i < n; i++) {
      if (v[i - 1] < v[i]) {
        continue;
      }
      auto a = to_string(v[i - 1]), b = to_string(v[i]), c = a.substr(0, b.length());
      if (c == b && a.length() != b.length() && to_string(v[i - 1] + 1).substr(0, b.length()) == c) {
        v[i] = v[i - 1] + 1;
        r += a.length() - b.length();
        continue;
      }
      while (v[i - 1] >= v[i]) {
        v[i] *= 10;
        r++;
      }
    }
    cout << "Case #" << o << ": " << r << '\n';
  }
}