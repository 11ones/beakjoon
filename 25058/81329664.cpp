// 2024년 7월 20일 15:16:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc = 0;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n, m;
    cin >> n >> m;
    int r = 0, w = 0;
    for(int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;
      r = max(r, a);
      w = max(w, b);
    }
    if(r + w > n) {
      cout << "IMPOSSIBLE\n";
    } else {
      for(int i = 0; i < r; i++) {
        cout << "R";
      }
      for(int i = 0; i < n - r; i++) {
        cout << "W";
      }
      cout << '\n';
    }
  }
}