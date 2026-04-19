// 2024년 8월 31일 22:54:31
// 맞았습니다!!
// 2488KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, cnt = 0;
  cin >> n;
  for(int o = 0; o < n; o++) {
    string s;
    cin >> s;
    vector<char> v;
    for(auto e : s) {
      if(v.empty() || v.back() != e) {
        v.push_back(e);
      } else {
        v.pop_back();
      }
    }
    if(v.empty()) {
      cnt++;
    }
  }
  cout << cnt;
}