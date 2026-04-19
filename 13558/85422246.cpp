// 2024년 10월 20일 14:57:45
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 2; i < n; i++) {
    map<int, int> f, b;
    for (int j = 0; j < i; j++) f[v[i] - v[j]]++;
    for (int j = i + 1; j < n; j++) b[v[j] - v[i]]++;
    for(auto e : f) {
      a += e.second * b[e.first];
    }
  }
  cout << a;
}