// 2024년 5월 15일 16:53:59
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int> t;

int find(vector<int> &v, int x) {
  if (v[x] != x) {
    return v[x] = find(v, v[x]);
  }
  return x;
}

int main() {
  int n, m;
  cin >> n >> m;

  priority_queue<t, vector<t>, greater<t>> q;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    q.push({c, a - 1, b - 1});
  }

  int cost = 0, cnt = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = i;
  }

  while (1) {
    auto t = q.top();
    q.pop();
    int a = find(v, get<1>(t));
    int b = find(v, get<2>(t));
    if (a != b) {
      v[a] = b;
      cost += get<0>(t);
      cnt++;
      if (cnt == n - 2) {
        cout << cost;
        return 0;
      }
    }
  }
}