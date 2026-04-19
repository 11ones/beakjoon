// 2025년 7월 23일 02:24:41
// 맞았습니다!!
// 2024KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    set<int> s;
    vector<int> v(N), r(N);
    for(int &e : v) cin >> e;
    for(int i = 1; i <= N; ++i) {
      s.insert(i);
    }
    for(int i = N - 1; i >= 0; --i) {
      if(v[i] >= s.size()) {
        cout << "IMPOSSIBLE\n";
        goto E;
      }
      auto x = s.begin();
      for(int j = 0; j < v[i]; ++j) {
        ++x;
      }
      r[i] = *x;
      s.erase(x);
    }
    for(auto e : r) {
      cout << e << " ";
    }
    cout << "\n";
    E:;
  }
}