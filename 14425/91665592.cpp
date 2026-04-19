// 2025년 3월 19일 21:21:17
// 맞았습니다!!
// 7836KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, c = 0;
  cin >> n >> m;
  string s;
  set<string> S;
  while(n--) {
    cin >> s;
    S.insert(s);
  }
  while(m--) {
    cin >> s;
    c += S.count(s);
  }
  cout << c;
}