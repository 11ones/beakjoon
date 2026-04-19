// 2024년 4월 28일 23:41:29
// 맞았습니다!!
// 4348KB
// 100ms
#include <algorithm>
#include <iostream>
#include <tuple>
using namespace std;
typedef tuple<int, int, int> t;

int arr[2][1000]; // 대표인 노드 위치, 자식노드 수

int find(int x) { // union-find
  if (arr[0][x] != x) {
    return arr[0][x] = find(arr[0][x]);
  }
  return x;
}

int main() {
  int n, m;
  int a, b, c;
  cin >> n >> m;
  vector<t> v;
  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    v.push_back({c, a - 1, b - 1});
  }
  sort(v.begin(), v.end()); // c가 적은 줄 부터 탐색

  for (int i = 0; i < n; i++) {
    arr[0][i] = i; // 시작은 자기 자신이 대표
    arr[1][i] = 1; // (본인 포함)자식노드의 수는 1개
  }

  int sum = 0;
  for (int i = 0; i < m; i++) {
    auto tmp = v[i];
    get<1>(tmp) = find(get<1>(tmp));
    get<2>(tmp) = find(get<2>(tmp));
    if (get<1>(tmp) != get<2>(tmp)) { // 연결이 안 되어있을 때만 연결
      arr[0][get<1>(tmp)] = get<2>(tmp);
      arr[1][get<1>(tmp)] += arr[1][get<2>(tmp)]; // 자식노드의 수를 대표인 노드에만 저장함
      sum += get<0>(tmp);
      if (arr[1][get<1>(tmp)] >= n) { // 자식노드의 수가 전체 노드의 수일 때 종료
        break;
      }
    }
  }
  cout << sum;
}