// 2024년 8월 15일 17:05:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  array<int, 3> a{};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    a[x] += 3;
    a[y] += 2;
    a[z]++;
  }
  int mx = 0, c = 0, p = 0;
  for (int i = 0; i < 3; i++) {
    if (a[i] > mx) {
      mx = a[i];
      c = 1;
      p = i;
    }
    if (a[i] == mx) {
      c++;
    }
  }
  if(c > 1) {
    cout << "0 " << mx;
  } else {
    cout << p + 1<< ' ' << mx;
  }
}