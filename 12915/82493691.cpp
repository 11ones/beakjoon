// 2024년 8월 14일 23:29:41
// 틀렸습니다
// KB
// ms
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
  while(a[1] || a[3]) {
    mx = max(mx, min(min(a[0], a[2]),a[4]));
    if(a[0] <= a[4] && a[3] || !a[1]) {
      a[4]--;
      a[2]++;
      a[3]--;
    } else if(a[0] > a[4] && a[1] || !a[3]) {
      a[0]--;
      a[2]++;
      a[1]--;
    }
  }
  cout << mx;
}