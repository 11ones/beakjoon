// 2024년 7월 13일 14:59:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int run(int a, int b, int d, vector<int> &v) {
  if(d == v.size()) { // 마지막 벽장까지 연 경우
    return 0;
  }
  if (v[d] <= a) { // 다음 벽장이 열린 벽장들 보다 왼쪽인 경우
    return a - v[d] + run(v[d], b, d + 1, v);
  }
  if (v[d] >= b) { // 다음 벽장이 열린 벽장들 보다 오른쪽인 경우
    return v[d] - b + run(a, v[d], d + 1, v);
  }
  return min(v[d] - a + run(v[d], b, d + 1, v), // 다음 벽장이 열린 벽장들 사이에 있는 경우
             b - v[d] + run(a, v[d], d + 1, v));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b;
  cin >> n >> a >> b;
  if (a > b) { // b를 오른쪽에 둠
    swap(a, b);
  }
  int t;
  cin >> t;
  vector<int> v(t); // 열 벽장들을 저장
  for (int i = 0; i < t; i++) {
    cin >> v[i];
    v[i];
  }
  cout << run(a, b, 0, v);
}