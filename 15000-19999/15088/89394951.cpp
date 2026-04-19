// 2025년 2월 1일 12:57:12
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x = 0;
  cin >> n >> k;
  stack<int> v;
  while(k--) {
    string s;
    cin >> s;
    if(s == "undo") {
      cin >> s;
      for(int i = stoi(s); i > 0; i--) {
        v.pop();
      }
    } else {
      v.push(stoi(s));
    }
  }
  while(v.size()) {
    x += v.top();
    v.pop();
  }
  cout << x % n;
}