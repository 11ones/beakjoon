// 2024년 8월 4일 15:43:38
// 맞았습니다!!
// 5928KB
// 108ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    v[i]--;
  }
  bool sme = 0;
  for(int i = 0; i < n; i++) {
    if(v[i] == i) {
      sme = 1;
      break;
    }
  }
  if(sme) {
    cout << -1;
  } else {
    cout << 1'000'003;
  }
}