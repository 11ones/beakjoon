// 2024년 8월 28일 23:13:50
// 맞았습니다!!
// 2916KB
// 68ms
#include <bits/stdc++.h>
#define MAX 1'000'000
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v;
  for (int i = 2; i <= 1'299'709; i++) {
    bool chk = 1;
    for (auto e : v) {
      if(e * e > i) {
        break;
      }
      if (!(i % e)) {
        chk = 0;
        break;
      }
    }
    if (chk) {
      v.push_back(i);
    }
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    auto t = lower_bound(v.begin(), v.end(), x);
    if (*t == x) {
      cout << "0\n";
    } else {
      cout << *t - *(t - 1) << '\n';
    }
  }
}