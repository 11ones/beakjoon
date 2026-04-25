// 2024년 11월 3일 16:42:32
// 틀렸습니다
// KB
// ms
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
      if (c == b && a.length() != b.length() && to_string(stoi(c) + 1).substr(0, b.length()) == c) {
        v[i] = v[i - 1] + 1;
        r += b.length() - a.length();
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