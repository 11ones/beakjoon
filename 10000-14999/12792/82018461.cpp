// 2024년 8월 4일 15:30:28
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n), r(n), t(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    v[i]--;
  }
  bool fst = 1;
  for(int i = 0; i < n; i++) {
    if(v[i] == i) {
      fst = 0;
      break;
    }
  }
  r = v;
  for(int i = 2; i <= n; i++) {
    for(int j = 0; j < n; j++) {
      t[j] = v[r[j]];
    }
    r = t;
    bool dif = 1, sme = 1;
    for(int j = 0; j < n; j++) {
      if(r[i] == i) {
        dif = 0;
      } else {
        sme = 0;
      }
    }
    if(dif) {
      cout << i;
      return 0;
    }
    if(sme) {
      if(fst) {
        cout << i + 1;
      } else {
        cout << -1;
      }
      return 0;
    }
  }
}