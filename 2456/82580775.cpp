// 2024년 8월 16일 23:17:36
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
    a[0] += x;
    a[1] += y;
    a[2] += z;
  }
  auto mx = max_element(a.begin(), a.end());
  int cnt = 0;
  for(auto e : a) {
    if(*mx == e) {
      cnt++;
    }
  }
  if(cnt == 1) {
    cout << mx - a.begin() + 1 << " " << *mx;
  } else {
    cout << "0 " << *mx;
  }
}