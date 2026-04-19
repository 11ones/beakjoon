// 2025년 3월 19일 21:15:14
// 맞았습니다!!
// 47828KB
// 736ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n , m, t;
  cin >> n;
  map<int, int> M;
  while(n--) {
    cin >> t;
    M[t]++;
  }
  cin >> m;
  while(m--) {
    cin >> t;
    cout << M[t] << ' ';
  }
}