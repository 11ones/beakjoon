// 2024년 6월 29일 21:29:23
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  map<string, int> m;
  for(int i = 0; i < n; i++) {
    cin >> s;
    m[s]++;
  }
  int mx = 0;
  for(auto e : m) {
    if(mx < e.second) {
      mx = e.second;
      s = e.first;
    }
  }
  cout << s;
}