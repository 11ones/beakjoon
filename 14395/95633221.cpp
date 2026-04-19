// 2025년 6월 25일 00:13:26
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

long s, t;
string a = "";

void f (long x, string r) {
  if(x == t && (a == "" || a.length() > r.length())) {
    a = r;
    return;
  }
  if(x != 1 && x * x <= t) f(x * x , r + "*");
  if(x * 2 <= t) f(x * 2 , r + "+");
}

int main() {
  cin >> s >> t;
  if(s == t) {
    cout << 0;
    return 0;
  }
  if(t == 0) {
    cout << "-";
    return 0;
  }
  if(s == 0) {
    cout << -1;
    return 0;
  }
  f(s, "");
  f(1, "/");
  cout << (a == "" ? "-1" : a);
}