// 2024년 3월 20일 22:35:57
// 맞았습니다!!
// 8292KB
// 120ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  int b, c;
  long long cnt = 0;
  cin >> b >> c;
  for (int i = 0; i < n; i++) {
    cnt += (v[i] - b < 0) ? 1 : 1 + (v[i] - b) / c + ((v[i] - b) % c != 0);
  }
  cout << cnt;
}