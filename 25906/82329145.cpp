// 2024년 8월 11일 15:13:41
// 맞았습니다!!
// 2024KB
// 32ms
#include <bits/stdc++.h>
using namespace std;

int t, k, mx = 0;
array<vector<int>, 5> s;
array<vector<array<int, 6>>, 3> v;
array<int, 6> c{};

void run(int d) {
  if (d == 3) {
    if (c[0] + k <= t) {
      for (int i = 1; i < 6; i++) {
        if(!c[i]) {
          continue;
        }
        c[i]--;
        for (int j = 1; j < 6; j++) {
          c[j]++;
          int tmp = 0;
          for (int l = 0; l < 5; l++) {
            tmp += s[l][min((int)s[l].size(), c[l + 1]) - 1];
          }
          mx = max(mx, tmp);
          c[j]--;
        }
        c[i]++;
      }
    } else {
      int tmp = 0;
      for (int l = 0; l < 5; l++) {
        tmp += s[l][min((int)s[l].size(), c[l + 1]) - 1];
      }
      mx = max(mx, tmp);
    }
    return;
  }
  for (auto e : v[d]) {
    for (int i = 0; i < 6; i++) {
      c[i] += e[i];
    }
    if (c[0] <= t) {
      run(d + 1);
    }
    for (int i = 0; i < 6; i++) {
      c[i] -= e[i];
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t >> k;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      int a;
      cin >> a;
      s[i].push_back(a);
    }
  }
  array<int, 6> tmp = {};
  for (int i = 0; i < 3; i++) {
    v[i].push_back(tmp);
  }
  for (int i = 0; i < 3; i++) {
    tmp = {};
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      cin >> tmp[0];
      v[i].push_back(tmp);
    }
    for (int j = 1; j <= x; j++) {
      for (int l = 1; l < 6; l++) {
        cin >> v[i][j][l];
      }
    }
  }
  run(0);
  cout << mx;
}