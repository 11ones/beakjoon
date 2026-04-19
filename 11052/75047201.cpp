// 2024년 3월 15일 22:39:37
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> p;

bool cmp(p a, p b) {
  return (double)a.first / a.second > (double)b.first / b.second;
}

int main() {
  int n;
  cin >> n;
  vector<p> v;
  for (int i = 1; i <= n; i++) {
    int p = 0;
    cin >> p;
    v.push_back({p, i});
  }
  sort(v.begin(), v.end(), cmp);
  int crd = 0;
  int cst = 0;
  while(crd < n) {
    for(int i = 0; i < n; i++) {
      if(crd + v[i].second > n) {
        continue;
      }
      crd += v[i].second;
      cst += v[i].first;
      break;
    }
  }
  cout << cst;
}