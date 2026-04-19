// 2024년 11월 4일 23:27:32
// 26점
// 2156KB
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
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int i = 1; i < n; i++) {
      if (v[i - 1].length() < v[i].length() || v[i - 1].length() == v[i].length() && v[i - 1] < v[i]) {
        continue;
      }
      auto c = v[i - 1].substr(0, v[i].length());
      int la = v[i - 1].length(), lb = v[i].length();
      auto a2 = v[i - 1];
      a2.back() += 1;
      for (int j = la - 1; j > 0; j--) {
        a2[j - 1] += (a2[j] - '0') / 10;
        a2[j] = (a2[j] - '0') % 10 + '0';
      }
      if (a2[0] - '0' == 10) {
        a2.insert(a2.begin(), '1');
        a2[1] = '0';
      }
      if (c == v[i] && la != lb && a2.substr(0, lb) == c) {
        v[i] = a2;
        r += la - lb;
        continue;
      }
      while (v[i - 1].length() > v[i].length() || v[i - 1].length() == v[i].length() && v[i - 1] >= v[i]) {
        v[i].push_back('0');
        r++;
      }
    }
    cout << "Case #" << o << ": " << r << '\n';
  }
}