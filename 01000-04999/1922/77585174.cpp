// 2024년 4월 28일 23:25:20
// 맞았습니다!!
// 4348KB
// 108ms
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
typedef tuple<int, int, int> t;

int arr[2][1000];

int find(int x) {
  if (arr[0][x] != x) {
    return arr[0][x] = find(arr[0][x]);
  }
  return x;
}

int main() {
  int n, m;
  int a, b, c;
  cin >> n >> m;
  priority_queue<t, vector<t>, greater<t>> q;
  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    q.push({c, a - 1, b - 1});
  }

  for (int i = 0; i < n; i++) {
    arr[0][i] = i;
    arr[1][i] = 1;
  }

  int sum = 0;
  for (int i = 0; i < m; i++) {
    auto tmp = q.top();
    q.pop();
    get<1>(tmp) = find(get<1>(tmp));
    get<2>(tmp) = find(get<2>(tmp));
    if (get<1>(tmp) != get<2>(tmp)) {
      arr[0][get<1>(tmp)] = get<2>(tmp);
      arr[1][get<1>(tmp)] += arr[1][get<2>(tmp)];
      sum += get<0>(tmp);
      if (arr[1][get<1>(tmp)] >= n) {
        break;
      }
    }
  }
  cout << sum;
}