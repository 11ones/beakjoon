// 2024년 9월 18일 16:26:57
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, c = 0;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 0; i <= n - k; i++) {
    if (v[i]) {
      c++;
      for (int j = i; j < i + k; j++) v[j] = !v[j];
    }
  }
  int t = 0;
  for(int i = n - k; i < n; i++) {
    t += v[i];
  }
  cout << (t ? "Insomnia" : to_string(c));
}