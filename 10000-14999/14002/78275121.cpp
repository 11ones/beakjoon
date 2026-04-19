// 2024년 5월 13일 16:28:16
// 맞았습니다!!
// 2020KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n), lis, t(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  lis.push_back(v[0]);
  for (int i = 1; i < n; i++) {
    if (lis.empty()) {
      lis.push_back(v[i]);
      continue;
    }
    if(v[i] < lis[0]) {
      lis[0] = v[i];
      t[i] = 0;
      continue;
    }
    auto it = upper_bound(lis.begin(), lis.end(), v[i]);
    if(*(it - 1) == v[i]) {
      t[i] = it - lis.begin() - 1;
      continue;
    }    
    if (it == lis.end()) {
      t[i] = lis.size();
      lis.push_back(v[i]);
      continue;
    }
    *it = v[i];
    t[i] = it - lis.begin();
  }
  cout << lis.size() << '\n';
  int j = lis.size() - 1;
  for(int i = n - 1; i >= 0; i--) {
    if(t[i] == j) {
      lis[j] = v[i];
      j--;
    }
  }
  for(auto e : lis) {
    cout << e << " ";
  }
}