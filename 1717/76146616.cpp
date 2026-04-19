// 2024년 4월 1일 22:52:25
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
  list<int> *l = new list<int>[n + 1];

  for (int i = 0; i <= n; i++) {
    arr[i] = i;
    l[i].push_back(i);
  }

  for (int i = 0; i < m; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    if (x == 0) {
      if (arr[a] != arr[b]) {
        int mn = min(arr[a], arr[b]);
        int mx = max(arr[a], arr[b]);
        for (auto e : l[mx]) {
          arr[e] = mn;
        }
        l[mn].splice(l[mn].end(), l[mx]);
      }
      continue;
    }
    cout << ((arr[a] == arr[b]) ? "YES" : "NO") << '\n';
  }
}