// 2024년 9월 18일 16:45:51
// 맞았습니다!!
// 2680KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, c = 0;
  cin >> n >> k;
  vector<int> v(n);
  queue<int> q;
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 0; i <= n - k; i++) {
    if(!q.empty() && q.front() + k <= i) {
      q.pop();
    }
    if ((v[i] + q.size()) % 2) {
      c++;
      q.push(i);
    }
  }
  int t = 0;
  for(int i = n - k + 1; i < n; i++) {
    if(!q.empty() && q.front() + k <= i) {
      q.pop();
    }
    if ((v[i] + q.size()) % 2) {
      t++;
    }
  }
  cout << (t ? "Insomnia" : to_string(c));
}