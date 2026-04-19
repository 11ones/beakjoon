// 2024년 8월 25일 14:09:40
// 맞았습니다!!
// 2024KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
array<vector<int>, 51> v{};
void run(int p, int t) {
  if (t > k) {
    return;
  }
  if (t == k) {
    cnt++;
    return;
  }
  for (int i = p; i < 51; i++) {
    for (auto e : v[i]) {
      run(e + 1, t + e - i + 1);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a != 5) {
      v[a * 10 + b].push_back(a * 10 + c);
    }
  }
  run(1, 0);
  cout << cnt;
}