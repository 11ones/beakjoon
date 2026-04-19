// 2024년 5월 15일 17:05:56
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int> t;

int find(vector<int> &v, int x) {
  if (v[x] != x) {
    return v[x] = find(v, v[x]);
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;

  vector<t> vt;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    vt.push_back({c, a - 1, b - 1});
  }
  sort(vt.begin(), vt.end());
  int cost = 0, cnt = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = i;
  }

  for(auto e : vt) {
    int a = find(v, get<1>(e));
    int b = find(v, get<2>(e));
    if (a != b) {
      v[a] = b;
      cost += get<0>(e);
      cnt++;
      if (cnt == n - 2) {
        cout << cost;
        return 0;
      }
    }
  }
}