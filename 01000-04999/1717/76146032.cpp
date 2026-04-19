// 2024년 4월 1일 22:44:24
// 시간 초과
// KB
// ms
#include <iostream>
#include <list>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  int *arr = new int[n + 1];

  for (int i = 0; i <= n; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < m; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    if (x == 0) {
      int mn = min(arr[a], arr[b]);
      int mx = max(arr[a], arr[b]);
      for (int j = mn; j < n; j++) {
        if (arr[j] == mx) {
          arr[j] = mn;
        }
      }
      continue;
    }
    cout << ((arr[a] == arr[b]) ? "YES" : "NO") << '\n';
  }
}