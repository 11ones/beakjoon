// 2025년 3월 19일 20:22:12
// 맞았습니다!!
// 16448KB
// 100ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  string a, b;
  cin >> n >> m;
  unordered_map<string, string> M;
  while(n--) {
    cin >> a >> b;
    M[a] = b;
  }
  while(m--) {
    cin >> a;
    cout << M[a] << '\n';
  }
}