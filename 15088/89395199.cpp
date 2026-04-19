// 2025년 2월 1일 13:07:37
// 맞았습니다!!
// 2024KB
// 0ms
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
  cout << (x + n * (int)1e7) % n;
}