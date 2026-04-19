// 2024년 8월 18일 22:56:53
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  array<array<int, 5>, 3> a{};
  a[0][4] = 1;
  a[1][4] = 2;
  a[2][4] = 3;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    a[0][0] += x;
    a[0][x]++;
    a[1][0] += y;
    a[1][y]++;
    a[2][0] += z;
    a[2][z]++;
  }
  sort(a.begin(), a.end(), greater<>());
  if (a[0][0] == a[1][0] && a[0][1] == a[1][1] && a[0][2] == a[1][2]) {
    cout << "0 " << a[0][0];
    return 0;
  }
  cout << a[0][4] << " " << a[0][0];
}