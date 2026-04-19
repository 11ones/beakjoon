// 2024년 6월 17일 23:50:36
// 맞았습니다!!
// 2020KB
// 1992ms
#include <iostream>
#include <queue>
#include <vector>
#define MAX 1'000'000
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  vector<int> v;
  for (int i = 2; i * i < MAX; i++) {
    bool chk = 1;
    for (auto e : v) {
      if (!(i % e)) {
        chk = 0;
        break;
      }
    }
    if (chk) {
      v.push_back(i);
    }
  }
  while (1) {
    cin >> x;
    if (!x) {
      return 0;
    }
    if (x == 1) {
      cout << 0 << '\n';
      continue;
    }
    int cnt = 1;
    for (int i = 3; i < x; i += 2) {
      if (x / i < 2 + i / 2) {
        break;
      }
      if (x / i * i == x) {
        cnt++;
      }
    }
    for (int i = 2; i < x; i += 2) {
      int t = x / (i / 2);
      if (t / 2 < 1 + i / 2) {
        break;
      }
      if ((x % (i / 2))) {
        continue;
      }
      if (t % 2) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}