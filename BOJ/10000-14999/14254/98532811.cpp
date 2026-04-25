// 2025년 9월 15일 18:11:45
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k, l, r = 0;
  cin >> s >> k;
  l = s.length();
  if (l >= k * 2) {
    for (int i = 0; i < k; ++i) {
      if (s[i] != s[i + l - k]) ++r;
    }
    cout << r;
    return 0;
  }
  for (int i = 0; i < l - k; ++i) {
    vector<int> v(26);
    for (int j = i; j < l; j += l - k) {
      ++v[s[j] - 'a'];
    }
    sort(v.begin(), v.end());
    for (int e : v) r += e;
    r -= v[25];
  }
  cout << r;
}