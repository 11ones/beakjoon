// 2024년 7월 20일 15:47:16
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x;
  cin >> n >> m;
  int o = 0, z = 0;
  for(int i = 0; i < n * m; i++) {
    cin >> x;
    if(x) {
      o++;
    } else {
      z++;
    }
  }
  if(o % 2 || z % 2) {
    cout << -1;
    return 0;
  }
  cout << 1;
}