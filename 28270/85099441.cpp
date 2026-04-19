// 2024년 10월 12일 14:00:04
// 3점
// 10444KB
// 148ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int c;
  cin >> c;
  stack<int> s;
  vector<int> v;
  while (c--) {
    int x;
    cin >> x;
    if (x > s.size() + 1) {
      cout << -1;
      while (c--) {
        cin >> x;
      }
      return 0;
    }
    if (x <= s.size()) {
      while (x < s.size()) {
        s.pop();
      }
    } else {
      s.push(0);
    }
    s.top()++;
    v.push_back(s.top());
  }
  for(auto e : v){
    cout << e << " ";
  }
}