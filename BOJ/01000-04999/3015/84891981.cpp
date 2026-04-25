// 2024년 10월 7일 23:39:52
// 컴파일 에러
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  stack<pair<l, l>> s;
  l r = 0, n;
  cin >> n;
  while (n--) {
    l x, t = 1;
    cin >> x;
    while (!s.empty() && s.top().first <= x) {
      r += s.top().second;
      if(s.top().first == x) t += s.top().second;
      s.pop();
    }
    if(!s.empty()) r++;
    s.push({x, t});
  }
  cout << r;
}