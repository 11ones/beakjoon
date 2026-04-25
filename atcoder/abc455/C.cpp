#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, K, x, c = 0;
  cin >> N >> K;
  map<long, long> m;
  while(N--) {
    cin >> x;
    ++m[x];
  }
  vector<long> v;
  for(auto &[a, b] : m) v.push_back(a * b);
  sort(v.begin(), v.end(), greater<>());
  for (int i = K; i < v.size(); ++i) {
    c += v[i];
  }
  cout << c;
}