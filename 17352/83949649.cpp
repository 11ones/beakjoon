// 2024년 9월 16일 16:10:06
// 맞았습니다!!
// 7440KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int find(int x) {
  if (x == v[x]) {
    return x;
  }
  return v[x] = find(v[x]);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    v.push_back(i);
  }
  vector<pair<int, int>> tv(n - 2);
  for (int i = 0; i < n - 2; i++) {
    cin >> tv[i].first >> tv[i].second;
  }
  for (auto e : tv) {
    int a = find(e.first - 1);
    int b = find(e.second - 1);
    v[a] = b;
  }
  for (int i = 1; i < n; i++) {
    if (find(i - 1) != find(i)) {
      cout << i << " " << i + 1;
      return 0;
    }
  }
}