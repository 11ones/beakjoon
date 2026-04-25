// 2024년 2월 8일 23:27:39
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> p;
int n, m, mn = 1'000'000;
vector<p> hus, ckn;
vector<int> v;

void run(int x) {
  if (v.size() >= m) {
    int sum = 0;
    for (auto h : hus) {
      int rmn = 1'000'000;
      for (auto e : v) {
        int tmp = abs(h.first - ckn[e].first) + abs(h.second - ckn[e].second);
        if (rmn > tmp) {
          rmn = tmp;
        }
      }
      sum += rmn;
    }
    if (mn > sum) {
      mn = sum;
    }
    return;
  }
  for (int i = x; i < ckn.size(); i++) {
    v.push_back(i);
    run(i + 1);
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      if (x == 1) {
        hus.push_back({i, j});
      } else if (x == 2) {
        ckn.push_back({i, j});
      }
    }
  }
  run(0);
  cout << mn;
}