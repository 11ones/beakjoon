#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long N, L, R, r = 0, l = 0;
  string S;
  cin >> N >> L >> R >> S;
  vector<vector<int>> v(26, vector<int>());
  for (int i = 0; i < N; ++i) {
    v[S[i] - 'a'].push_back(i);
  }
  for (auto e : v) {
    queue<int> q;
    for (auto f : e) {
      while (!q.empty() && f - q.front() > R) {
        q.pop();
      }
      r += q.size();
      q.push(f);
    }
  }
  for (auto e : v) {
    queue<int> q;
    for (auto f : e) {
      while (!q.empty() && f - q.front() >= L) {
        q.pop();
      }
      l += q.size();
      q.push(f);
    }
  }
  cout << r - l;
}