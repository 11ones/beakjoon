// 2024년 8월 14일 23:31:10
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  array<int, 5> a;
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  a[0] += a[1];
  a[4] += a[3];
  int mx = 0;
  mx = max(mx, min(min(a[0], a[2]),a[4]));
  while(a[1] || a[3]) {
    if(a[0] <= a[4] && a[3] || !a[1]) {
      a[4]--;
      a[2]++;
      a[3]--;
    } else if(a[0] > a[4] && a[1] || !a[3]) {
      a[0]--;
      a[2]++;
      a[1]--;
    }
    mx = max(mx, min(min(a[0], a[2]),a[4]));
  }
  cout << mx;
}