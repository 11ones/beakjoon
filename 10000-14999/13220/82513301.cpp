// 2024년 8월 15일 15:56:07
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
  vector<int> v(n), r(n), kmp(2 * n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    v.push_back(v[i]);
    cin >> r[i];
  }
  int t = 0, i = 1;
  while (i < n) {
    if (r[t] != r[i]) {
      if (t == 0) {
        i++;
      } else {
        t = kmp[--t];
      }
    } else {
      kmp[i++] = ++t;
    }
  }
  t = 0;
  for(int i = 0; i < 2 * n; i++) {
    if(r[t] == v[i]) {
      t++;
    } else {
      t = kmp[t - 1];
    }
    if(t == n) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}