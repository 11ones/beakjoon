// 2024년 5월 14일 22:44:58
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int find(int x) {
  if (v[x] != x) {
    return v[x] = find(v[x]);
  }
  return x;
}

int main() {
  int n, m, x, a, b;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    v.push_back(i);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x;
      if (x == 1 && i > j) {
        a = find(i);
        b = find(j);
        if (a != b) {
          v[a] = b;
        }
      }
    }
  }
  cin >> x;
  int t = find(x);
  for(int i = 1; i < m; i++) {
    cin >> x;
    if(t != find(x)) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}