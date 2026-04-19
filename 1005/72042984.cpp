// 2024년 1월 19일 23:44:46
// 맞았습니다!!
// 2828KB
// 144ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef vector<int> vi;

vi tv;
vi *rv = new vi[1'000];
int res, arr[1'000];
bool vst[1'000];

int m(int x) {
  vst[x] = 1;
  int mx = 0;
  for (int elem : rv[x]) {
    int tmp;
    if (vst[elem] == 1) {
      tmp = arr[elem];
    } else if (rv[elem].empty()) {
      tmp = tv[elem];
    } else {
      tmp = m(elem);
    }
    if (mx < tmp) {
      mx = tmp;
    }
  }
  arr[x] = mx + tv[x];
  return mx + tv[x];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int f = 0; f < t; f++) {
    tv.clear();
    for (int i = 0; i < 1000; i++) {
      rv[i].clear();
      vst[i] = 0;
    }
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      tv.push_back(tmp);
    }
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      rv[b - 1].push_back(a - 1);
    }

    cin >> res;
    cout << m(res - 1) << '\n';
  }
}