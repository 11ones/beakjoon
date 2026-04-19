// 2024년 10월 23일 23:51:14
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, p = 0;
  cin >> n >> m;
  vector<int> v(n), t;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  t = v;
  for(int i = 1; i < n; i++) {
    v[i] += v[i - 1];
    t[n - i - 1] += t[n - i];
  }
  v.insert(v.begin(), 0);
  t.push_back(0);
  for(int i = 0; i <= n; i++) {
    if(v[i] - t[i] >= m) {
      p = i - 1;
      break;
    }
  }
  cout << n - p;
}