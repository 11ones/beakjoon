// 2024년 1월 19일 23:24:48
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef vector<int> vi;

vi tv;
vi *rv = new vi[1'000];
int res;

int m(int x) {
  if(rv[x].empty()) {
    return tv[x];
  }
  int mx = -1;
  for(int elem : rv[x]) {
    int tmp = m(elem);
    if(mx < tmp) {
      mx = tmp;
    }
  }
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