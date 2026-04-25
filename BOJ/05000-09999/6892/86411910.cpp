// 2024년 11월 13일 22:55:39
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while(n--) {
    string a, b, c;
    cin >> a >> b >> c;
    int al = a.length(), bl = b.length(), cl = c.length();
    int x = min(al, bl), y = min(bl, cl), z = min(cl, al);
    if(a.substr(al - x) == b.substr(bl - x) || b.substr(bl - y) == c.substr(cl - y) || c.substr(cl - z) == a.substr(al - z) || a.substr(0, x) == b.substr(0, x) || b.substr(0, y) == c.substr(0, y) || c.substr(0, z) == a.substr(0, z)) {
      cout << "No\n";
    } else {
      cout << "Yes\n";
    }
  }
}