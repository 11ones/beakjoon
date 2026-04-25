// 2025년 6월 24일 23:50:23
// 맞았습니다!!
// 3324KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, mx = 0;
  cin >> N;
  vector<array<int, 3>> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i][0] >> v[i][1];
    v[i][2] = i;
  }
  sort(v.begin(), v.end());
  vector<int> c(N);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
  queue<int> q2;
  for (int i = 0; i < N; ++i) {
    while(!q.empty() && q.top().first < v[i][0]) {
      q2.push(q.top().second);
      q.pop();
    }
    if(q2.empty()) {
      q2.push(++mx);
    }
    c[v[i][2]] = q2.front();
    q.push({v[i][1], q2.front()});
    q2.pop();
  }
  cout << mx;
  for(int e : c) cout << '\n' << e;
}