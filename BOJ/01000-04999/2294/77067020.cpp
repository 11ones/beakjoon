// 2024년 4월 16일 23:51:36
// 맞았습니다!!
// 2180KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  unique(v.begin(), v.end());

  int *d = new int[k + 1];
  for (int i = 0; i < v.size(); i++) {
    int t = v[i];
    d[t] = 1;
    for (int j = 0; j <= k - t; j++) {
      if (d[j]) {
        if (d[t + j]) {
          d[t + j] = min(d[t + j], d[j] + 1);
        } else {
          d[t + j] = d[j] + 1;
        }
      }
    }
  }
  cout << (d[k] ? d[k] : -1);
}