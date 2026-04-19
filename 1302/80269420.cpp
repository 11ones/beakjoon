// 2024년 6월 29일 21:28:30
// 컴파일 에러
// KB
// ms
include <iostream>
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