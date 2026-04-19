// 2024년 8월 4일 16:44:33
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q, t, a;
  cin >> n >> q;
  vector<int> r(n), c(n);
  for(int i = 0; i < q; i++) {
    cin >> t >> a;
    a--;
    if(t == 1) {
      r[a]++; 
    } else {
      c[a]++;
    }
    int rmx = 0, rmxc = 0, cmx = 0, cmxc = 0;
    for(auto e : r) {
      if(rmx < e) {
        rmx = e;
        rmxc = 1;
      } else if(rmx == e) {
        rmxc++;
      }
    }
    for(auto e : c) {
      if(cmx < e) {
        cmx = e;
        cmxc = 1;
      } else if(cmx == e) {
        cmxc++;
      }
    }
    cout << rmxc * cmxc << '\n';
  }
}