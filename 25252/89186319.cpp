// 2025년 1월 26일 15:51:28
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, s1, s2, t, c = 0;
  cin >> n >> s1 >> s2;
  list<int> L;
  vector<int> a(s2);
  for (int i = 0; i < s1; i++) {
    cin >> t;
    L.push_back(t);
  }
  for (auto &e : a) {
    cin >> e;
  }
  for (int i = s2 - 1; i >= 0; i--) {
    L.push_back(a[i]);
  }
  L.push_front(-1);
  L.push_back(-1);
  for (int i = 1; i <= n; i++) {
    auto I = L.begin();
    for (int j = 0; j < L.size(); j++) {
      if (*I == i) {
        if (!*--I) c++;
        ++I;
        if (!*++I) c++;
        --I;
        L.erase(I);
        break;
      }
      I++;
    }
  }
  cout << c;
}