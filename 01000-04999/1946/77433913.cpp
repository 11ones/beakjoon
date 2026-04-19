// 2024년 4월 24일 23:41:58
// 맞았습니다!!
// 5108KB
// 1912ms
#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, bool> tp;

bool cmp(tp a, tp b) { return get<1>(a) < get<1>(b); }

int main() {
  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int n;
    cin >> n;
    vector<tp> v;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v.push_back({a, b, 0});
    }
    sort(v.begin(), v.end());
    int mn = get<1>(v[0]);
    for (int i = 1; i < n; i++) {
      if (get<1>(v[i]) > mn) {
        get<2>(v[i]) = 1;
        continue;
      }
      mn = min(mn, get<1>(v[i]));
    }
    sort(v.begin(), v.end(), cmp);
    mn = get<0>(v[0]);
    for (int i = 1; i < n; i++) {
      if (get<0>(v[i]) > mn) {
        get<2>(v[i]) = 1;
        continue;
      }
      mn = min(mn, get<0>(v[i]));
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (!get<2>(v[i])) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}