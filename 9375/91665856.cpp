// 2025년 3월 19일 21:24:59
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;
  while(tc--) {
    int n, t = 1;
    cin >> n;
    string a, b;
    map<string, int> m;
    while(n--) {
      cin >> a >> b;
      m[b]++;
    }
    for(auto e : m) {
      t *= (e.second + 1);
    }
    cout << t - 1 << '\n';
  }
}