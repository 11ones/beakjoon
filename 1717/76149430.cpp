// 2024년 4월 1일 23:28:26
// 맞았습니다!!
// 6388KB
// 40ms
#include <iostream>
#include <list>
using namespace std;

int arr[1'000'001];

int find(int x) {
  if (arr[x] != x) {
    return arr[x] = find(arr[x]);
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i <= n; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < m; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    a = find(a);
    b = find(b);
    if (x == 0) {
      if (a != b) {
        arr[a] = b;
      }
      continue;
    }
    cout << ((a == b) ? "YES" : "NO") << '\n';
  }
}