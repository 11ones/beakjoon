// 2025년 1월 1일 00:16:19
// 맞았습니다!!
// 2032KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<tuple<int, int, int, string>> v(n);
  while (n--) cin >> get<3>(v[n]) >> get<2>(v[n]) >> get<1>(v[n]) >> get<0>(v[n]);
  sort(v.begin(), v.end());
  cout << get<3>(v.back()) << '\n' << get<3>(v[0]);
}