// 2024년 8월 28일 00:00:51
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  while(getline(cin, s)) {
    array<int, 4> a{};
    for(auto e : s) {
      if(e >= 'a' && e <= 'z') {
        a[0]++;
      }
      if(e >= 'A' && e <= 'Z') {
        a[1]++;
      }
      if(e >= '0' && e <= '9') {
        a[2]++;
      }
      if(e == ' ') {
        a[3]++;
      }
    }
    for(auto ee : a) {
      cout << ee << " ";
    }
    cout << '\n';
  }
}