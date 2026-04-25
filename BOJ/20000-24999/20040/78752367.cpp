// 2024년 5월 23일 23:04:05
// 맞았습니다!!
// 9712KB
// 232ms
#include <iostream>
#include <vector>
using namespace std;

int find(int t[], int x) {
  if (t[x] != x) {
    return t[x] = find(t, t[x]);
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int *t = new int[n];
  for (int i = 0; i < n; i++) {
    t[i] = i;
  }
  for (int i = 1; i <= m; i++) {
    int a, b;
    cin >> a >> b;
    a = find(t, a);
    b = find(t, b);
    if(a == b) {
      while(!cin.eof()) {
        cin >> a;
      }
      cout << i;
      return 0;
    }
    t[a] = b;
  }
  cout << 0;
}