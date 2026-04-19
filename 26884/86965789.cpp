// 2024년 11월 28일 20:34:12
// 맞았습니다!!
// 9948KB
// 80ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x = 0;
  cin >> n;
  map<string, int> m;
  while(n--) {
    string s;
    cin >> s;
    m[s]++;
  }
  for(auto e : m) {
    if(e.second > 1) x++;
  }
  cout << x;
}