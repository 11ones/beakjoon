// 2025년 6월 24일 23:30:36
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<array<int, 3>> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i][0] >> v[i][1];
    v[i][2] = i;
  }
  sort(v.begin(), v.end());
  vector<int> t, c(N);
  for (int i = 0; i < N; ++i) {
    for (int &e : t) {
      if (e < v[i][0]) e = 0;
    }
    for (int j = 0; j < t.size(); ++j) {
      if (!t[j]) {
        t[j] = v[i][1];
        c[v[i][2]] = j + 1;
        goto E;
      }
    }
    t.push_back(v[i][1]);
    c[v[i][2]] = t.size();
    E:;
  }
  cout << t.size();
  for(int e : c) cout << '\n' << e;
}