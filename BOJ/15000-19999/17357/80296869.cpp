// 2024년 6월 30일 16:48:07
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string sum(string s, long long x) {
  reverse(s.begin(), s.end());
  auto t = s.begin();
  while(x != 0) {
    if(t == s.end()) {
      s.push_back('0');
    }
    if(*t - '0' + x % 10 >= 10) {
      x += 10;
    }
    *t = (*t - '0' + x) % 10 + '0';
    x /= 10;
    t++;
  }
  reverse(s.begin(), s.end());
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> v(n + 1), s(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    s[i] = v[i] + s[i - 1];
  }
  for (int o = 1; o <= n; o++) {
    string mx = "";
    int mxp;
    for (int i = 1; i + o - 1 <= n; i++) {
      string t = "0";
      long long m = (s[i + o - 1] - s[i - 1]);
      for (int j = 0; j < o; j++) {
        t = sum(t, (v[i + j] * o - m) * (v[i + j] * o - m));
      }
      if (mx.length() < t.length() || mx.length() == t.length() && mx < t) {
        mx = t;
        mxp = i;
      }
    }
    cout << mxp << '\n';
  }
}