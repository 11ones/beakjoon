// 2024년 7월 22일 23:54:50
// 맞았습니다!!
// 2916KB
// 264ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  vector<int> v;
  for(int i = 2; i < 1'000'000; i++) {
    bool chk = 1;
    for(auto e : v) {
      if(e * e > i) {
        break;
      }
      if(i % e == 0) {
        chk = 0;
        break;
      }
    }
    if(chk) {
      v.push_back(i);
    }
  }
  int n;
  while(1) {
    cin >> n;
    if(!n) {
      return 0;
    }
    for(auto e : v) {
      auto t = lower_bound(v.begin(), v.end(), n - e);
      if(n - e == *t) {
        cout << n << " = " << e << " + " << *t << '\n';
        break;
      }
    }
  }
}